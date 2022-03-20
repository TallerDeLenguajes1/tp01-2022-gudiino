# tp12022
Desarrollo del primer practico de taller de lenguaje 1

## Archivo .gitignore

**¿Por qué es conviniente incluirlo?**
El archivo .gitignore, es un archivo de texto que le dice a Git qué archivos o carpetas ignorar en un proyecto.

**¿Cuando se debe hacer?**
A menudo, se tendrá una clase de archivos que no deseamos que Git agregue automáticamente o que incluso nos muestre como sin seguimiento. Por lo general, estos son archivos generados automáticamente, como archivos de registro o archivos producidos por un sistema de compilación.

**¿Cómo configuraría el archivo .gitignore?**
_Las entradas de este archivo van con_

1. "*" se utiliza como una coincidencia comodín.
2. '/' se usa para ignorar las rutas relativas al archivo .gitignore.
3. '#' es usado para agregar comentarios

_ejemplos_

'# Ignora archivos del sistema Mac '
.DS_store

'# Ignora la carpeta node_modules'
node_modules

'# Ignora todos los archivos de texto'
*.txt

'# Ignora los archivos relacionados a API keys'
.env

'# Ignora archivos de configuración SASS'
.sass-cache

[MAS EJEMPLOS AQUÍ](https://www.atlassian.com/es/git/tutorials/saving-changes/gitignore)