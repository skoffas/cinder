.. -*- rst -*-

Volume types (types)
====================


Update a volume type
~~~~~~~~~~~~~~~~~~~~

.. rest_method::  PUT /v3/{project_id}/types/{volume_type_id}

Updates a volume type.

To create an environment with multiple-storage back ends, you must
specify a volume type. The API spawns Block Storage volume back
ends as children to ``cinder-volume``, and keys them from a unique
queue. The API names the back ends ``cinder-volume.HOST.BACKEND``.
For example, ``cinder-volume.ubuntu.lvmdriver``. When you create a
volume, the scheduler chooses an appropriate back end for the
volume type to handle the request.

For information about how to use volume types to create multiple-
storage back ends, see `Configure multiple-storage back ends
<http://docs.openstack.org/admin-
guide/blockstorage_multi_backend.html>`_.


Normal response codes: 200


Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - volume_type_id: volume_type_id
   - volume_type: volume_type_1
   - name: name_7
   - description: description_15
   - is_public: is_public
   - extra_specs: extra_specs

Request Example
---------------

.. literalinclude:: ./samples/volume-type-update-request.json
   :language: javascript



Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - volume_type: volume_type_1
   - is_public: is_public
   - extra_specs: extra_specs
   - description: description_15
   - name: name_7

Response Example
----------------

.. literalinclude:: ./samples/volume-type-show-response.json
   :language: javascript


Create or update extra specs for volume type
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v3/{project_id}/types/{volume_type_id}/extra_specs

Adds new extra specifications to a volume type, or updates the extra
specifications that are assigned to a volume type.


Normal response codes: 200


Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - volume_type_id: volume_type_id
   - extra_specs: extra_specs

Request Example
---------------

.. literalinclude:: ./samples/volume-type-extra-specs-create-update-request.json
   :language: javascript



Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - extra_specs: extra_specs


Response Example
----------------

.. literalinclude:: ./samples/volume-type-extra-specs-create-update-response.json
   :language: javascript


Show all extra specifications for volume type
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  GET /v3/{project_id}/types/{volume_type_id}/extra_specs

Shows all extra specifications assigned to a volume type.


Normal response codes: 200

Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - volume_type_id: volume_type_id


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - extra_specs: extra_specs


Response Example
----------------

.. literalinclude:: ./samples/volume-type-all-extra-specs-show-response.json
   :language: javascript


Show extra specification for volume type
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  GET /v3/{project_id}/types/{volume_type_id}/extra_specs/{key}

Shows the specific extra specification assigned to a volume type.


Normal response codes: 200

Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - volume_type_id: volume_type_id
   - key: key_4


Response Example
----------------

.. literalinclude:: ./samples/volume-type-specific-extra-specs-show-response.json
   :language: javascript


Update extra specification for volume type
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  PUT /v3/{project_id}/types/{volume_type_id}/extra_specs/{key}

Update the specific extra specification assigned to a volume type.


Normal response codes: 200


Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - volume_type_id: volume_type_id
   - key: key_4

Request Example
---------------

.. literalinclude:: ./samples/volume-type-specific-extra-specs-update-request.json
   :language: javascript


Response Example
----------------

.. literalinclude:: ./samples/volume-type-specific-extra-specs-update-response.json
   :language: javascript


Delete extra specification for volume type
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  DELETE /v3/{project_id}/types/{volume_type_id}/extra_specs/{key}

Deletes the specific extra specification assigned to a volume type.


Normal response codes: 202


Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - volume_type_id: volume_type_id
   - key: key_4


Show volume type detail
~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  GET /v3/{project_id}/types/{volume_type_id}

Shows details for a volume type.


Normal response codes: 200

Request
-------

.. rest_parameters:: parameters.yaml

   - volume_type_id: volume_type_id
   - project_id: project_id_path


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - volume_type: volume_type_1
   - is_public: is_public
   - extra_specs: extra_specs
   - description: description_15
   - name: name_7


Response Example
----------------

.. literalinclude:: ./samples/volume-type-show-response.json
   :language: javascript


Delete a volume type
~~~~~~~~~~~~~~~~~~~~

.. rest_method::  DELETE /v3/{project_id}/types/{volume_type_id}

Deletes a volume type.

Normal response codes: 202


Request
-------

.. rest_parameters:: parameters.yaml

   - volume_type_id: volume_type_id
   - project_id: project_id_path


List all volume types
~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  GET /v3/{project_id}/types

Lists volume types.


Normal response codes: 200


Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - sort: sort
   - limit: limit
   - offset: offset
   - marker: marker


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - volume_types: volume_types
   - extra_specs: extra_specs
   - name: name_7

Response Example
----------------

.. literalinclude:: ./samples/volume-types-list-response.json
   :language: javascript


Create a volume type
~~~~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v3/{project_id}/types

Creates a volume type.

To create an environment with multiple-storage back ends, you must
specify a volume type. Block Storage volume back ends are spawned
as children to ``cinder-volume``, and they are keyed from a unique
queue. They are named ``cinder-volume.HOST.BACKEND``. For example,
``cinder-volume.ubuntu.lvmdriver``. When a volume is created, the
scheduler chooses an appropriate back end to handle the request
based on the volume type.

For information about how to use volume types to create multiple-
storage back ends, see `Configure multiple-storage back ends
<http://docs.openstack.org/admin-
guide/blockstorage_multi_backend.html>`_.


Normal response codes: 200


Request
-------

.. rest_parameters:: parameters.yaml

   - volume_type: volume_type_1
   - project_id: project_id_path
   - name: name_7
   - is_public: is_public
   - description: description_15

Request Example
---------------

.. literalinclude:: ./samples/volume-type-create-request.json
   :language: javascript


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - volume_type: volume_type_1
   - is_public: is_public
   - extra_specs: extra_specs
   - description: description_15
   - name: name_7
   - id: volume_type_id_body
   - os-volume-type-access:is_public: os-volume-type-access:is_public

Response Example
----------------

.. literalinclude:: ./samples/volume-type-create-response.json
   :language: javascript

Show an encryption type
~~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  GET /v3/{project_id}/types/{volume_type_id}/encryption

Show an encryption type.

To show an encryption type for an existing volume type.

Normal response codes: 200


Request
-------

.. rest_parameters:: parameters.yaml

   - volume_type_id: volume_type_id
   - project_id: project_id_path


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - encryption: encryption
   - volume_type_id: volume_type_id_body
   - encryption_id: encryption_id_body
   - key_size: key_size
   - provider: provider
   - control_location: control_location
   - cipher: cipher
   - deleted: deleted
   - created_at: created_at
   - updated_at: updated_at
   - deleted_at: deleted_at

Response Example
----------------

.. literalinclude:: ./samples/encryption-type-show-response.json
   :language: javascript


Delete an encryption type
~~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  GET /v3/{project_id}/types/{volume_type_id}/encryption/{encryption_id}

Delete an encryption type.

To delete an encryption type for an existing volume type.

Normal response codes: 202


Request
-------

.. rest_parameters:: parameters.yaml

   - volume_type_id: volume_type_id
   - project_id: project_id_path
   - encryption_id: encryption_id


Create an encryption type
~~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v3/{project_id}/types/{volume_type_id}/encryption

Creates an encryption type.

To create an encryption type for an existing volume type.

Normal response codes: 200


Request
-------

.. rest_parameters:: parameters.yaml

   - volume_type_id: volume_type_id
   - project_id: project_id_path
   - encryption: encryption
   - key_size: key_size
   - provider: provider
   - control_location: control_location
   - cipher: cipher

Request Example
---------------

.. literalinclude:: ./samples/encryption-type-create-request.json
   :language: javascript


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - encryption: encryption
   - volume_type_id: volume_type_id_body
   - encryption_id: encryption_id_body
   - key_size: key_size
   - provider: provider
   - control_location: control_location
   - cipher: cipher

Response Example
----------------

.. literalinclude:: ./samples/encryption-type-create-response.json
   :language: javascript


Update an encryption type
~~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v3/{project_id}/types/{volume_type_id}/encryption/{encryption_id}

Update an encryption type.

To update an encryption type for an existing volume type.

Normal response codes: 200


Request
-------

.. rest_parameters:: parameters.yaml

   - volume_type_id: volume_type_id
   - project_id: project_id_path
   - encryption_id: encryption_id
   - encryption: encryption
   - key_size: key_size
   - provider: provider_optional
   - control_location: control_location
   - cipher: cipher

Request Example
---------------

.. literalinclude:: ./samples/encryption-type-update-request.json
   :language: javascript


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - encryption: encryption
   - key_size: key_size
   - provider: provider_optional
   - control_location: control_location
   - cipher: cipher

Response Example
----------------

.. literalinclude:: ./samples/encryption-type-update-response.json
   :language: javascript
