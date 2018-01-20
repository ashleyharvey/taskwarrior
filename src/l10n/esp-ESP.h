////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2018, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// columns/Col*
#define STRING_COLUMN_BAD_NAME       "Nombre de columna no reconocido '{1}'."
#define STRING_COLUMN_BAD_FORMAT     "Formato de columna no reconocido '{1}.{2}'"
#define STRING_COLUMN_LABEL_TASKS    "Tareas"
#define STRING_COLUMN_LABEL_DEP      "Depende"
#define STRING_COLUMN_LABEL_DEP_S    "Dep"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_DESC     "Descripción"
#define STRING_COLUMN_LABEL_DUE      "Vencimiento"
#define STRING_COLUMN_LABEL_END      "Fin"
#define STRING_COLUMN_LABEL_ENTERED  "Entrada"
#define STRING_COLUMN_LABEL_COUNT    "Recuento"
#define STRING_COLUMN_LABEL_COMPLETE "Completada"
#define STRING_COLUMN_LABEL_MOD      "Modificada"
#define STRING_COLUMN_LABEL_ADDED    "Añadida"
#define STRING_COLUMN_LABEL_AGE      "Edad"
#define STRING_COLUMN_LABEL_ID       "ID"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_PROJECT  "Proyecto"
#define STRING_COLUMN_LABEL_UNTIL    "Hasta"
#define STRING_COLUMN_LABEL_WAIT     "Espera"
#define STRING_COLUMN_LABEL_WAITING  "Esperando hasta"
#define STRING_COLUMN_LABEL_RECUR    "Recur"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_RECUR_L  "Recurrencia"
#define STRING_COLUMN_LABEL_START    "Comienzo"
#define STRING_COLUMN_LABEL_STARTED  "Comenzada"
#define STRING_COLUMN_LABEL_ACTIVE   "A"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_STATUS   "Estatus"
#define STRING_COLUMN_LABEL_STAT     "Est"
#define STRING_COLUMN_LABEL_STAT_PE  "Pendientes"
#define STRING_COLUMN_LABEL_STAT_CO  "Completadas"
#define STRING_COLUMN_LABEL_STAT_DE  "Suprimidas"
#define STRING_COLUMN_LABEL_STAT_WA  "Esperando"
// Mejor Periódica, pero STRING_COLUMN_LABEL_STAT_P es Pendiente
#define STRING_COLUMN_LABEL_STAT_RE  "Recurrentes"
#define STRING_COLUMN_LABEL_STAT_P   "P"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_STAT_C   "C"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_STAT_D   "S"
#define STRING_COLUMN_LABEL_STAT_W   "E"
#define STRING_COLUMN_LABEL_STAT_R   "R"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_TAGS     "Marcas"
#define STRING_COLUMN_LABEL_TAG      "Marca"
#define STRING_COLUMN_LABEL_UUID     "UUID"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_URGENCY  "Urgencia"
#define STRING_COLUMN_LABEL_NAME     "Nombre"
#define STRING_COLUMN_LABEL_VALUE    "Valor"
#define STRING_COLUMN_LABEL_LAST     "Last instance"
#define STRING_COLUMN_LABEL_RTYPE    "Recurrence type"
#define STRING_COLUMN_LABEL_DATE     "Fecha"
#define STRING_COLUMN_LABEL_COLUMN   "Columnas"
#define STRING_COLUMN_LABEL_STYLES   "Formatos soportados"
#define STRING_COLUMN_LABEL_EXAMPLES "Ejemplo"
#define STRING_COLUMN_LABEL_SCHED    "Programada"
#define STRING_COLUMN_LABEL_UDA      "Nombre"
#define STRING_COLUMN_LABEL_TYPE     "Tipo"
#define STRING_COLUMN_LABEL_MODIFY   "Modificable"
#define STRING_COLUMN_LABEL_NOMODIFY "Solo lectura"
#define STRING_COLUMN_LABEL_LABEL    "Etiqueta"
#define STRING_COLUMN_LABEL_DEFAULT  "Defecto"
#define STRING_COLUMN_LABEL_VALUES   "Valores permitidos"
#define STRING_COLUMN_LABEL_UDACOUNT "Recuento de uso"
#define STRING_COLUMN_LABEL_ORPHAN   "UDA huérfano"

#define STRING_COLUMN_LABEL_COMMAND  "Comando"
#define STRING_COLUMN_LABEL_CATEGORY "Categoría"
#define STRING_COLUMN_LABEL_RO       "R/W"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_GC       "GC"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_CONTEXT  "Contexto"
#define STRING_COLUMN_LABEL_FILTER   "Filtro"
#define STRING_COLUMN_LABEL_MODS     "Mods"  // |esp-ESP|==|eng-USA|
#define STRING_COLUMN_LABEL_MISC     "Misc"  // |esp-ESP|==|eng-USA|

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "casa @tarea"
#define STRING_COLUMN_EXAMPLES_PROJ  "casa.jardín"
#define STRING_COLUMN_EXAMPLES_PAR   "casa"
#define STRING_COLUMN_EXAMPLES_IND   "  casa.jardín"
#define STRING_COLUMN_EXAMPLES_DESC  "Mueve tu ropa a la percha de abajo"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Inmediatamente antes de comer"
#define STRING_COLUMN_EXAMPLES_ANNO2 "Si juegas en el partido de esta tarde"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Antes de que escribas a casa"
#define STRING_COLUMN_EXAMPLES_ANNO4 "Si no te estás cortando el pelo"

// commands/Cmd*
#define STRING_CMD_CONFLICT          "informe personalizado '{1}' en conflicto con comando interno de taskwarrior."
#define STRING_CMD_VERSION_USAGE     "Muestra el número de versión de taskwarrior"
#define STRING_CMD_VERSION_USAGE2    "Muestra el número de versión (solamente) de taskwarrior"

#define STRING_CMD_VERSION_DOCS      "La documentación de Taskwarrior se puede consultar usando 'man task', 'man taskrc', 'man task-color', y 'man task-sync' o en http://taskwarrior.org."
#define STRING_CMD_VERSION_UNKNOWN   "desconocido"
#define STRING_CMD_LOGO_USAGE        "Muestra el logo de Taskwarrior"
#define STRING_CMD_LOGO_COLOR_REQ    "El comando logo requiere que el soporte de color esté habilitado."
#define STRING_CMD_EXEC_USAGE        "Ejecuta comandos y scripts externos"
#define STRING_CMD_URGENCY_USAGE     "Muestra la medida de urgencia de una tarea"
#define STRING_CMD_URGENCY_RESULT    "tarea {1} urgencia {2}"
#define STRING_CMD_ADD_USAGE         "Añade una nueva tarea"
#define STRING_CMD_ADD_FEEDBACK      "Creada tarea {1}."
#define STRING_CMD_ADD_RECUR         "Creada tarea {1} (modelo de recurrencia)."
#define STRING_CMD_LOG_USAGE         "Añade una nueva tarea que ya ha sido completada"
#define STRING_CMD_LOG_NO_RECUR      "No puede registrar tareas recurrentes."
#define STRING_CMD_LOG_NO_WAITING    "No puede registrar tareas en espera."
#define STRING_CMD_LOG_LOGGED        "Tarea {1} registrada."

#define STRING_CMD_IDS_USAGE_RANGE   "Muestra los IDs de las tareas coincidentes, como un rango"
#define STRING_CMD_IDS_USAGE_LIST    "Muestra los IDs de las tareas coincidentes, en forma de lista"
#define STRING_CMD_IDS_USAGE_ZSH     "Muestra los IDs y descripciones de las tareas coincidentes"
#define STRING_CMD_UDAS_USAGE        "Muestra detalles de todos los UDA definidos"
#define STRING_CMD_UDAS_COMPL_USAGE  "Muestra los UDAs definidos con fines de terminación"
#define STRING_CMD_UUIDS_USAGE_RANGE "Muestra los UUIDs de las tareas coincidentes, como una lista separada por comas"
#define STRING_CMD_UUIDS_USAGE_LIST  "Muestra los UUIDs de las tareas coincidentes, como una lista"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Muestra los UUIDs y descripciones de las tareas coincidentes"
// metadatos: RAE 3ªed
#define STRING_CMD_INFO_USAGE        "Muestra todos los datos y metadatos"
#define STRING_CMD_INFO_BLOCKED      "Esta tarea está bloqueada por"
#define STRING_CMD_INFO_BLOCKING     "Esta tarea bloquea"
#define STRING_CMD_INFO_UNTIL        "Hasta"
#define STRING_CMD_INFO_MODIFICATION "Modificación"
#define STRING_CMD_INFO_MODIFIED     "Modificada por última vez"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Marcas virtuales"
#define STRING_CMD_UNDO_USAGE        "Revierte el cambio más reciente a una tarea"
#define STRING_CMD_STATS_USAGE       "Muestra estadísticas de la base de datos de tareas"
#define STRING_CMD_STATS_CATEGORY    "Categoría"
#define STRING_CMD_STATS_DATA        "Datos"
#define STRING_CMD_STATS_TOTAL       "Total"  // |esp-ESP|==|eng-USA|
#define STRING_CMD_STATS_ANNOTATIONS "Anotaciones"
#define STRING_CMD_STATS_UNIQUE_TAGS "Marcas únicas"
#define STRING_CMD_STATS_PROJECTS    "Proyectos"
#define STRING_CMD_STATS_DATA_SIZE   "Tamaño de datos"
#define STRING_CMD_STATS_UNDO_TXNS   "Transacciones deshacer"
#define STRING_CMD_STATS_BACKLOG     "Sincroniza transacciones atrasadas"
#define STRING_CMD_STATS_TAGGED      "Tareas marcadas"
#define STRING_CMD_STATS_OLDEST      "Tarea más antigua"
#define STRING_CMD_STATS_NEWEST      "Tarea más reciente"
//#define STRING_CMD_STATS_USED_FOR    "Tarea usada por"
#define STRING_CMD_STATS_USED_FOR    "Tarea en uso durante"
#define STRING_CMD_STATS_ADD_EVERY   "Tarea añadida cada"
#define STRING_CMD_STATS_COMP_EVERY  "Tarea completada cada"
#define STRING_CMD_STATS_DEL_EVERY   "Tarea suprimida cada"
#define STRING_CMD_STATS_AVG_PEND    "Tiempo medio pendiente"

#define STRING_CMD_STATS_DESC_LEN    "Longitud media de desc"
#define STRING_CMD_STATS_CHARS       "{1} caracteres"
#define STRING_CMD_STATS_BLOCKED     "Tareas bloqueadas"
#define STRING_CMD_STATS_BLOCKING    "Tareas bloqueantes"
#define STRING_CMD_REPORTS_USAGE     "Lista todos los informes soportados"
#define STRING_CMD_REPORTS_REPORT    "Informe"
#define STRING_CMD_REPORTS_DESC      "Descripción"
#define STRING_CMD_REPORTS_SUMMARY   "{1} informes"
//#define STRING_CMD_REPORTS_SUMMARY   "{1} informa"
#define STRING_CMD_TAGS_USAGE        "Muestra una lista de todas las marcas en uso"
#define STRING_CMD_COMTAGS_USAGE     "Muestra una lista de todas las marcas (solo nombres) en uso, con fines de auto-completado"
#define STRING_CMD_TAGS_SINGLE       "1 marca"
#define STRING_CMD_TAGS_PLURAL       "{1} marcas"
#define STRING_CMD_TAGS_NO_TAGS      "No hay marcas."
#define STRING_CMD_HISTORY_USAGE_M   "Muestra un informe de historia de tareas, por mes"

#define STRING_CMD_HISTORY_USAGE_D   "Shows a report of task history, by day"
#define STRING_CMD_HISTORY_USAGE_W   "Shows a report of task history, by week"
#define STRING_CMD_HISTORY_DAY       "Day"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_DAY      "Day"

#define STRING_CMD_HISTORY_YEAR      "Año"
#define STRING_CMD_HISTORY_MONTH     "Mes"
#define STRING_CMD_HISTORY_ADDED     "Añadidas"
#define STRING_CMD_HISTORY_COMP      "Completadas"
#define STRING_CMD_HISTORY_DEL       "Suprimidas"
#define STRING_CMD_HISTORY_NET       "Netas"
#define STRING_CMD_HISTORY_USAGE_A   "Muestra un informe de historia de tareas, por año"
#define STRING_CMD_HISTORY_AVERAGE   "Media"
#define STRING_CMD_HISTORY_LEGEND    "Leyenda: {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Leyenda: + añadida, X completada, - suprimida"

#define STRING_CMD_GHISTORY_USAGE_M  "Muestra un informe gráfico de historia de tareas, por mes"
#define STRING_CMD_GHISTORY_USAGE_A  "Muestra un informe gráfico de historia de tareas, por año"
#define STRING_CMD_GHISTORY_YEAR     "Año"
#define STRING_CMD_GHISTORY_MONTH    "Mes"
#define STRING_CMD_GHISTORY_NUMBER   "Número Añadidas/Completadas/Suprimidas"
#define STRING_CMD_UNIQUE_USAGE      "Genera listas de valores de atributo únicos"
#define STRING_CMD_UNIQUE_MISSING    "Se debe especificar un atributo. Ver 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "Debe especificar un atributo o un UDA."

#define STRING_CMD_DONE_USAGE        "Marca la tarea especificada como completada"
#define STRING_CMD_DONE_CONFIRM      "¿Completar tarea {1} '{2}'?"
#define STRING_CMD_DONE_TASK         "Completada tarea {1} '{2}'."
#define STRING_CMD_DONE_NO           "Tarea no completada."
#define STRING_CMD_DONE_NOTPEND      "La tarea {1} '{2}' no está pendiente ni esperando."
#define STRING_CMD_DONE_1            "Completada {1} tarea."
#define STRING_CMD_DONE_N            "Completadas {1} tareas."

#define STRING_CMD_PROJECTS_USAGE    "Muestra todos los nombres de proyecto en uso"
#define STRING_CMD_PROJECTS_USAGE_2  "Muestra una lista de todos los nombres (solamente) de proyecto en uso"
#define STRING_CMD_PROJECTS_NO       "No hay proyectos."
#define STRING_CMD_PROJECTS_NONE     "(ninguno)"
#define STRING_CMD_PROJECTS_SUMMARY  "{1} proyecto"
#define STRING_CMD_PROJECTS_SUMMARY2 "{1} proyectos"
#define STRING_CMD_PROJECTS_TASK     "({1} tarea)"
#define STRING_CMD_PROJECTS_TASKS    "({1} tareas)"
#define STRING_CMD_SUMMARY_USAGE     "Muestra un informe de estatus de tareas por proyecto"
#define STRING_CMD_SUMMARY_PROJECT   "Proyecto"
#define STRING_CMD_SUMMARY_REMAINING "Quedan"
#define STRING_CMD_SUMMARY_AVG_AGE   "Edad media"
#define STRING_CMD_SUMMARY_COMPLETE  "Completas"
#define STRING_CMD_SUMMARY_NONE      "(ninguna)"
#define STRING_CMD_COUNT_USAGE       "Cuenta tareas que coinciden"
#define STRING_CMD_GET_USAGE         "Método de acceso al DOM"
#define STRING_CMD_GET_NO_DOM        "Referencia a DOM no especificada."
#define STRING_CMD_GET_BAD_REF       "'{1}' no es una referencia a DOM."

#define STRING_CMD_UDAS_NO           "Ningún UDA definido."
#define STRING_CMD_UDAS_SUMMARY      "{1} UDA definido"
#define STRING_CMD_UDAS_SUMMARY2     "{1} UDAs definidos"
#define STRING_CMD_UDAS_ORPHAN       "{1} UDA huérfano"
#define STRING_CMD_UDAS_ORPHANS      "{1} UDAs huérfanos"

#define STRING_CMD_DELETE_USAGE      "Suprime la tarea especificada"
#define STRING_CMD_DELETE_CONFIRM    "¿Suprimir permanentemente la tarea {1} '{2}'?"
#define STRING_CMD_DELETE_TASK       "Suprimiendo tarea {1} '{2}'."
#define STRING_CMD_DELETE_TASK_R     "Suprimiendo tarea recurrente {1} '{2}'."
#define STRING_CMD_DELETE_CONFIRM_R  "Esta es una tarea recurrente. ¿Quiere suprimir todas las recurrencias pendientes de esta misma tarea?"
#define STRING_CMD_DELETE_NO         "Tarea no suprimida."
#define STRING_CMD_DELETE_NOT_DEL    "La tarea {1} '{2}' no es suprimible."
#define STRING_CMD_DELETE_1          "Suprimida {1} tarea."
#define STRING_CMD_DELETE_N          "Suprimidas {1} tareas."

#define STRING_CMD_DUPLICATE_USAGE   "Duplica las tareas especificadas"
#define STRING_CMD_DUPLICATE_REC     "Nota: la tarea {1} era una tarea madre recurrente. La tarea duplicada también lo es."
#define STRING_CMD_DUPLICATE_NON_REC "Nota: la tarea {1} era una tarea recurrente. La tarea duplicada no lo es."
#define STRING_CMD_DUPLICATE_CONFIRM "¿Duplicar tarea {1} '{2}'?"
#define STRING_CMD_DUPLICATE_TASK    "Duplicada tarea {1} '{2}'."
#define STRING_CMD_DUPLICATE_NO      "Tarea no duplicada."
#define STRING_CMD_DUPLICATE_1       "Duplicada {1} tarea."
#define STRING_CMD_DUPLICATE_N       "Duplicadas {1} tareas."

#define STRING_CMD_PURGE_USAGE       "Removes the specified tasks from the data files. Causes permanent loss of data."
#define STRING_CMD_PURGE_ABRT        "Purge operation aborted."
#define STRING_CMD_PURGE_1           "Purged {1} task."
#define STRING_CMD_PURGE_N           "Purged {1} tasks."
#define STRING_CMD_PURGE_CONFIRM     "Permanently remove task {1} '{2}'?"
#define STRING_CMD_PURGE_CONFIRM_R   "Task '{1}' is a recurrence template. All its {2} deleted children tasks will be purged as well. Continue?"
#define STRING_CMD_PURGE_NDEL_CHILD  "Task '{1}' is a recurrence template. Its child task {2} must be deleted before it can be purged."

#define STRING_CMD_START_USAGE       "Marca la tarea especificada como comenzada"
#define STRING_CMD_START_NO          "Tarea no comenzada."
#define STRING_CMD_START_ALREADY     "Tarea {1} '{2}' ya comenzada."
#define STRING_CMD_START_TASK        "Comenzando tarea {1} '{2}'."
#define STRING_CMD_START_CONFIRM     "¿Comenzar tarea {1} '{2}'?"
#define STRING_CMD_START_1           "Comenzada {1} tarea."
#define STRING_CMD_START_N           "Comenzadas {1} tareas."

#define STRING_CMD_STOP_USAGE        "Elimina el tiempo de 'comienzo' de una tarea"

#define STRING_CMD_STOP_NO           "Tarea no detenida."
#define STRING_CMD_STOP_ALREADY      "Tarea {1} '{2}' no comenzada."
#define STRING_CMD_STOP_TASK         "Deteniendo tarea {1} '{2}'."
#define STRING_CMD_STOP_CONFIRM      "¿Detener tarea {1} '{2}'?"
#define STRING_CMD_STOP_1            "Detenida {1} tarea."
#define STRING_CMD_STOP_N            "Detenidas {1} tareas."

#define STRING_CMD_APPEND_USAGE      "Añade texto al final de la descripción de una tarea existente"
#define STRING_CMD_APPEND_1          "Añadiendo texto a {1} tarea."
#define STRING_CMD_APPEND_N          "Añadiendo texto a {1} tareas."
#define STRING_CMD_APPEND_TASK       "Añadiendo texto a la tarea {1} '{2}'."
#define STRING_CMD_APPEND_TASK_R     "Añadiendo texto a la tarea recurrente {1} '{2}'."
#define STRING_CMD_APPEND_CONFIRM_R  "Esta es una tarea recurrente. ¿Quiere añadir a todas las recurrencias pendientes de esta misma tarea?"
#define STRING_CMD_APPEND_CONFIRM    "¿Añadir a la tarea {1} '{2}'?"
#define STRING_CMD_APPEND_NO         "Texto no añadido a la tarea."

#define STRING_CMD_PREPEND_USAGE     "Antepone texto a la descripción de una tarea existente"
#define STRING_CMD_PREPEND_1         "Antepuesto texto a {1} tarea."
#define STRING_CMD_PREPEND_N         "Antepuesto texto a {1} tareas."
#define STRING_CMD_PREPEND_TASK      "Anteponiendo texto a la tarea {1} '{2}'."
#define STRING_CMD_PREPEND_TASK_R    "Antepuesto texto a la tarea recurrente {1} '{2}'."
#define STRING_CMD_PREPEND_CONFIRM_R "Esta es una tarea recurrente. ¿Quiere anteponer texto a todas las recurrencias pendientes de esta misma tarea?"
#define STRING_CMD_PREPEND_CONFIRM   "¿Anteponer texto a la tarea {1} '{2}'?"
#define STRING_CMD_PREPEND_NO        "Texto no antepuesto."

#define STRING_CMD_ANNO_USAGE        "Añade una anotación a una tarea existente"
#define STRING_CMD_ANNO_CONFIRM      "¿Anotar la tarea {1} '{2}'?"
#define STRING_CMD_ANNO_TASK         "Anotando la tarea {1} '{2}'."
#define STRING_CMD_ANNO_TASK_R       "Anotando la tarea recurrente {1} '{2}'."
#define STRING_CMD_ANNO_CONFIRM_R    "Esta es una tarea recurrente. ¿Quiere anotar todas las recurrencias pendientes de esta misma tarea?"
#define STRING_CMD_ANNO_NO           "Tarea no anotada."
#define STRING_CMD_ANNO_1            "Anotada {1} tarea."
#define STRING_CMD_ANNO_N            "Anotadas {1} tareas."

#define STRING_CMD_DENO_USAGE        "Elimina una anotación"
#define STRING_CMD_DENO_NONE         "La tarea especificada no tiene anotaciones que puedan ser eliminadas."
#define STRING_CMD_DENO_CONFIRM      "¿Desanotar la tarea {1} '{2}'?"
#define STRING_CMD_DENO_FOUND        "Encontrada anotación '{1}' y eliminada."
#define STRING_CMD_DENO_NOMATCH      "No se encontró ninguna anotación coincidente para eliminar en '{1}'."
#define STRING_CMD_DENO_NO           "Tarea no desanotada."
#define STRING_CMD_DENO_1            "Desanotada {1} tarea."
#define STRING_CMD_DENO_N            "Desanotadas {1} tareas."

#define STRING_CMD_IMPORT_USAGE      "Importa archivos JSON"
#define STRING_CMD_IMPORT_SUMMARY    "Importadas {1} tareas."
#define STRING_CMD_IMPORT_FILE       "Importando '{1}'"
#define STRING_CMD_IMPORT_MISSING    "Archivo '{1}' no encontrado."
#define STRING_CMD_IMPORT_UUID_BAD   "UUID '{1}' no válido."
#define STRING_TASK_NO_DESC          "La anotación carece de descripción: {1}"
#define STRING_TASK_NO_ENTRY         "La anotación carece de fecha de entrada: {1}"

// STRING_CMD_DIAG_* strings all appear on the 'diag' command output.
#define STRING_CMD_SYNC_USAGE        "Sincroniza datos con el Servidor Task"
#define STRING_CMD_SYNC_NO_SERVER    "El Servidor Task no está configurado."
#define STRING_CMD_SYNC_BAD_CRED     "Credenciales del Servidor Task incorrectas."
#define STRING_CMD_SYNC_BAD_CERT     "Certificado del Servidor Task no encontrado."
#define STRING_CMD_SYNC_BAD_KEY      "Clave del Servidor Task no encontrada."
#define STRING_CMD_SYNC_ADD          "   añade {1} '{2}'"
#define STRING_CMD_SYNC_MOD          "modifica {1} '{2}'"
#define STRING_CMD_SYNC_PROGRESS     "Sincronizando con {1}"
#define STRING_CMD_SYNC_SUCCESS0     "Sincronización correcta."
#define STRING_CMD_SYNC_SUCCESS1     "Sincronización correcta. {1} cambios enviados."
#define STRING_CMD_SYNC_SUCCESS2     "Sincronización correcta. {1} cambios recibidos."
#define STRING_CMD_SYNC_SUCCESS3     "Sincronización correcta. {1} cambios enviados, {2} cambios recibidos."
#define STRING_CMD_SYNC_SUCCESS_NOP  "Sincronización correcta. No hay cambios"
#define STRING_CMD_SYNC_FAIL_ACCOUNT "Sincronización fallida. O bien sus credenciales son incorrectas, o su cuenta en el servidor Task no existe."
#define STRING_CMD_SYNC_FAIL_ERROR   "Sincronización fallida. El Servidor Task devolvió error: {1} {2}"
#define STRING_CMD_SYNC_FAIL_CONNECT "Sincronización fallida. No se pudo conectar con el Servidor Task."
#define STRING_CMD_SYNC_BAD_SERVER   "Sincronización fallida. Ajuste de configuración '{1}' incorrecto"
#define STRING_CMD_SYNC_NO_TLS       "Taskwarrior fue construido sin soporte GnuTLS. Sincronización no disponible."
#define STRING_CMD_SYNC_INIT         "Por favor, confirme que desea subir todas sus tareas pendientes al Servidor Task"
#define STRING_CMD_SYNC_NO_INIT      "Taskwarrior no procederá a la inicialización de la sincronización por primera vez."
#define STRING_CMD_SYNC_RELOCATE0    "La cuenta del servidor ha sido reubicada. Por favor, actualice su configuración utilizando:"
#define STRING_CMD_SYNC_RELOCATE1    "task config taskd.server {1}"   // |esp-ESP|==|eng-USA|
#define STRING_CMD_SYNC_BAD_CA       "Certificado CA no encontrado."
#define STRING_CMD_SYNC_TRUST_CA     "Debe proveer un certificado CA o la verificación de sobrescritura, pero no ambos."
#define STRING_CMD_SYNC_TRUST_OBS    "Los ajustes de 'taskd.trust' ahora solo pueden contener uno de los valores 'strict', 'ignore hostname' o 'allow all'."
#define STRING_CMD_DIAG_USAGE        "Detalles de plataforma, construcción y entorno"
#define STRING_CMD_DIAG_PLATFORM     "Plataforma"
#define STRING_CMD_DIAG_COMPILER     "Compilador"
#define STRING_CMD_DIAG_VERSION      "Versión"
#define STRING_CMD_DIAG_CAPS         "Capacidades"
#define STRING_CMD_DIAG_COMPLIANCE   "Conformidad"
#define STRING_CMD_DIAG_FEATURES     "Características Constructivas"
#define STRING_CMD_DIAG_BUILT        "Construido"
#define STRING_CMD_DIAG_COMMIT       "Commit"  // |esp-ESP|==|eng-USA|
#define STRING_CMD_DIAG_FOUND        "(encontrado)"
#define STRING_CMD_DIAG_MISSING      "(no encontrado)"
#define STRING_CMD_DIAG_MISS_DEP     "La tarea {1} depende de la tarea inexistente: {2}"
#define STRING_CMD_DIAG_MISS_PAR     "La tarea {1} tiene un modelo de recurrencia inexistente {2}"
#define STRING_CMD_DIAG_ENABLED      "Habilitado"
#define STRING_CMD_DIAG_DISABLED     "deshabilitado"
#define STRING_CMD_DIAG_CONFIG       "Configuración"
#define STRING_CMD_DIAG_TESTS        "Comprobaciones"
#define STRING_CMD_DIAG_UUID_SCAN    "Exploradas {1} tareas buscando UUIDs duplicados:"
#define STRING_CMD_DIAG_REF_SCAN     "Exploradas {1} tareas buscando referencias rotas:"
#define STRING_CMD_DIAG_REF_OK       "No se encontraron referencias rotas"
#define STRING_CMD_DIAG_UUID_DUP     "Encontrado duplicado {1}"
#define STRING_CMD_DIAG_UUID_NO_DUP  "No se encontraron duplicados"
#define STRING_CMD_DIAG_NONE         "-ninguno-"
#define STRING_CMD_DIAG_HOOKS        "Hooks"  // |esp-ESP|==|eng-USA|
#define STRING_CMD_DIAG_HOOK_NAME    "nombre de hook no reconocido"
#define STRING_CMD_DIAG_HOOK_SYMLINK "symlink"  // |esp-ESP|==|eng-USA|
#define STRING_CMD_DIAG_HOOK_EXEC    "ejecutable"
#define STRING_CMD_DIAG_HOOK_NO_EXEC "no ejecutable"
#define STRING_CMD_DIAG_HOOK_ENABLE  "Habilitado"
#define STRING_CMD_DIAG_HOOK_DISABLE "Inhabilitado"

#define STRING_CMD_COMMANDS_USAGE    "Genera una lista de todos los comandos, con detalles de comportamiento"
#define STRING_CMD_HCOMMANDS_USAGE   "Genera una lista de todos los comandos, con fines de auto-completado"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Genera una lista de todos los comandos, con fines de auto-completado zsh"

#define STRING_CMD_ZSHATTS_USAGE     "Genera una lista de todos los atributos, con fines de auto-completado zsh"
#define STRING_CMD_ALIASES_USAGE     "Genera una lista de todos los alias, con fines de auto-completado"

#define STRING_CMD_MODIFY_USAGE1     "Modifica la tarea existente con los argumentos provistos."
//#define STRING_CMD_MODIFY_USAGE1     "Modifies the existing task with provided arguments."
#define STRING_CMD_MODIFY_NO_DUE     "No puede especificar una tarea recurrente sin una fecha de vencimiento."
#define STRING_CMD_MODIFY_REM_DUE    "No puede eliminar la fecha de vencimiento de una tarea recurrente."
#define STRING_CMD_MODIFY_REC_ALWAYS "No puede eliminar la recurrencia de una tarea recurrente."
#define STRING_CMD_MODIFY_TASK       "Modificando tarea {1} '{2}'."
#define STRING_CMD_MODIFY_TASK_R     "Modificando tarea recurrente {1} '{2}'."
#define STRING_CMD_MODIFY_1          "Modificada {1} tarea."
#define STRING_CMD_MODIFY_N          "Modificada {1} tareas."
#define STRING_CMD_MODIFY_NO         "Tarea no modificada."
#define STRING_CMD_MODIFY_CONFIRM    "¿Modificar tarea {1} '{2}'?"
#define STRING_CMD_MODIFY_RECUR      "Esta es una tarea recurrente. ¿Quiere modificar todas las recurrencias pendientes de esta misma tarea?"
#define STRING_CMD_MODIFY_NEED_TEXT  "Se debe proveer texto adicional."
#define STRING_CMD_MODIFY_INACTIVE   "Nota: la tarea modificada {1} está {2}. Podría querer marcar esta tarea como pendiente con: task {3} modify status:pending"

#define STRING_CMD_COLOR_USAGE       "Todos los colores, una muestra, o una leyenda"
#define STRING_CMD_COLOR_HERE        "Aquí están los colores en uso actualmente:"
#define STRING_CMD_COLOR_COLOR       "Color"  // |esp-ESP|==|eng-USA|
#define STRING_CMD_COLOR_DEFINITION  "Definición"
#define STRING_CMD_COLOR_EXPLANATION "Use este comando para ver como los colores son mostrados por su terminal."
#define STRING_CMD_COLOR_16          "Uso de 16-colores (soporta subrayado, negrita, fondo brillante):"
#define STRING_CMD_COLOR_256         "Uso de 256-colores (soporta subrayado):"
#define STRING_CMD_COLOR_YOURS       "Su muestra:"
#define STRING_CMD_COLOR_BASIC       "Colores básicos"
#define STRING_CMD_COLOR_EFFECTS     "Efectos"
#define STRING_CMD_COLOR_CUBE        "Cubo de color rgb"
#define STRING_CMD_COLOR_RAMP        "Rampa de grises"
#define STRING_CMD_COLOR_TRY         "Intente ejecutar '{1}'."
//#define STRING_CMD_COLOR_TRY         "Try running '{1}'."
#define STRING_CMD_COLOR_OFF         "El color está actualmente desactivado en su archivo .taskrc . Para activar el color elimine la línea 'color=off', o cambie el 'off' a 'on'."
#define STRING_CMD_CONFIG_USAGE      "Cambia los ajustes en la configuración de task"
#define STRING_CMD_CONFIG_CONFIRM    "¿Está seguro de querer cambiar el valor de '{1}' de '{2}' a '{3}'?"
#define STRING_CMD_CONFIG_CONFIRM2   "¿Está seguro de querer añadir '{1}' con un valor de '{2}'?"
#define STRING_CMD_CONFIG_CONFIRM3   "¿Está seguro de querer eliminar '{1}'?"
#define STRING_CMD_CONFIG_NO_ENTRY   "No se encontró una entrada llamada '{1}'."
#define STRING_CMD_CONFIG_FILE_MOD   "Archivo de configuración {1} modificado."
#define STRING_CMD_CONFIG_NO_NAME    "Especifique el nombre de una variable de configuración a modificar."
#define STRING_CMD_HCONFIG_USAGE     "Lista todas las variables de configuración soportadas, a fines de completado"
#define STRING_CMD_CONTEXT_USAGE     "Establece y define contextos (filtros por defecto)"
#define STRING_CMD_CONTEXT_DEF_SUCC  "Contexto '{1}' definido."
#define STRING_CMD_CONTEXT_DEF_FAIL  "Contexto '{1}' no definido."
#define STRING_CMD_CONTEXT_DEF_USAG  "Se deben definir tanto el nombre de un contexto como su definición."
#define STRING_CMD_CONTEXT_DEF_ABRT  "Definición de contexto abortada."
#define STRING_CMD_CONTEXT_DEF_ABRT2 "Validación de filtro fallida: {1}"
#define STRING_CMD_CONTEXT_DEF_CONF  "El filtro '{1}' coincide con 0 tareas pendientes. ¿Quiere continuar?"
#define STRING_CMD_CONTEXT_DEF_INVLD "The name '{1}' is reserved and not allowed to use as a context name."
#define STRING_CMD_CONTEXT_DEL_SUCC  "Contexto '{1}' eliminado."
#define STRING_CMD_CONTEXT_DEL_FAIL  "Contexto '{1}' no eliminado."
#define STRING_CMD_CONTEXT_DEL_USAG  "El nombre del contexto necesita ser especificado."
#define STRING_CMD_CONTEXT_LIST_EMPT "No hay contextos definidos."
#define STRING_CMD_CONTEXT_SET_NFOU  "Contexto '{1}' noencontrado."
#define STRING_CMD_CONTEXT_SET_SUCC  "Contexto '{1}' establecido. Use 'task context none' para eliminarlo."
#define STRING_CMD_CONTEXT_SET_FAIL  "Contexto '{1}' no aplicado."
#define STRING_CMD_CONTEXT_SHOW_EMPT "Actualmente no se aplica ningún contexto."
#define STRING_CMD_CONTEXT_SHOW      "El contexto '{1}' con filtro '{2}' se aplica actualmente."
#define STRING_CMD_CONTEXT_NON_SUCC  "Contexto deshabilitado."
#define STRING_CMD_CONTEXT_NON_FAIL  "Context no deshabilitado."
#define STRING_CMD_HCONTEXT_USAGE    "Lista todos los contextos soportados, con fines de completado"
#define STRING_CMD_CUSTOM_MISMATCH   "Hay diferente número de columnas y etiquetas para el informe '{1}'."
#define STRING_CMD_CUSTOM_SHOWN      "{1} mostrada(s)"
#define STRING_CMD_CUSTOM_COUNT      "1 tarea"
#define STRING_CMD_CUSTOM_COUNTN     "{1} tareas"
#define STRING_CMD_CUSTOM_TRUNCATED  "truncado a {1} líneas"
#define STRING_CMD_TIMESHEET_USAGE   "Resumen semanal de tareas completadas y comenzadas"
#define STRING_CMD_TIMESHEET_STARTED "Comenzadas ({1} tareas)"
#define STRING_CMD_TIMESHEET_DONE    "Completadas ({1} tareas)"
#define STRING_CMD_BURN_USAGE_M      "Muestra un diagrama burndown, por meses"
#define STRING_CMD_BURN_USAGE_W      "Muestra un diagrama burndown, por semanas"
#define STRING_CMD_BURN_USAGE_D      "Muestra un diagrama burndown, por días"
#define STRING_CMD_BURN_TITLE        "Burndown"  // |esp-ESP|==|eng-USA|
#define STRING_CMD_BURN_TOO_SMALL    "Ventana de terminal demasiado pequeña para dibujar una gráfica."
#define STRING_CMD_BURN_TOO_LARGE    "Ventana de terminal demasiado grande para dibujar una gráfica."
#define STRING_CMD_BURN_DAILY        "Diario"
#define STRING_CMD_BURN_WEEKLY       "Semanal"
#define STRING_CMD_BURN_MONTHLY      "Mensual"
#define STRING_CMD_BURN_STARTED      "Comenz."             // Must be 7 or fewer characters
#define STRING_CMD_BURN_DONE         "Hechas"              // Must be 7 or fewer characters
#define STRING_CMD_BURN_PENDING      "Pend."               // Must be 7 or fewer characters
#define STRING_CMD_BURN_NO_CONVERGE  "No converge"
#define STRING_CMD_CAL_USAGE         "Muestra un calendario con las tareas fechadas resaltadas"
#define STRING_CMD_CAL_BAD_MONTH     "El argumento '{1}' no es un mes válido."
#define STRING_CMD_CAL_BAD_ARG       "No se pudo reconocer el argumento '{1}'."
#define STRING_CMD_CAL_LABEL_DATE    "Fecha"
#define STRING_CMD_CAL_LABEL_HOL     "Festivo"
#define STRING_CMD_CAL_SUN_MON       "La variable de configuración 'weekstart' solamente puede contener 'domingo' o 'lunes'."
#define STRING_CMD_CALC_USAGE        "Calculadora"

// Errors
// TODO Move each of these to appropriate section.
#define STRING_ERROR_NO_FILTER       "Los filtros de línea de comando no están soportados por este comando."

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "Ninguna tarea."
#define STRING_FEEDBACK_NO_TASKS_SP  "No se especificaron tareas."
#define STRING_FEEDBACK_NO_MATCH     "Ninguna coincidencia."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 tarea)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} tareas)"
#define STRING_FEEDBACK_DELETED      "Se eliminará {1}."
#define STRING_FEEDBACK_DEP_SET      "Las dependencias se ajustarán a '{1}'."
#define STRING_FEEDBACK_DEP_MOD      "Las dependencias se cambiarán de '{1}' a '{2}'."
#define STRING_FEEDBACK_DEP_DEL      "Dependencias '{1}' eliminadas."
#define STRING_FEEDBACK_DEP_WAS_SET  "Dependencias ajustadas a '{1}'."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Dependencias cambiadas de '{1}' a '{2}'."
#define STRING_FEEDBACK_ATT_SET      "{1} se establecerá como '{2}'."
#define STRING_FEEDBACK_ATT_MOD      "{1} se cambiará de '{2}' a '{3}'."
#define STRING_FEEDBACK_ATT_DEL      "{1} eliminado."
#define STRING_FEEDBACK_ATT_DEL_DUR  "{1} eliminado (duración: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} establecido como '{2}'."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} cambiado de '{2}' a '{3}'."
#define STRING_FEEDBACK_ANN_ADD      "Anotación de '{1}' añadida."
#define STRING_FEEDBACK_ANN_DEL      "Anotación '{1}' eliminada."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Anotación cambiada a '{1}'."
#define STRING_FEEDBACK_NOP          "No se harán cambios."
#define STRING_FEEDBACK_WAS_NOP      "No se hicieron cambios."
#define STRING_FEEDBACK_TAG_NOCOLOR  "La marca especial 'nocolor' deshabilitará las reglas de color para esta tarea."
#define STRING_FEEDBACK_TAG_NONAG    "La marca especial 'nonag' evitará el recuerdo fastidioso cuando la tarea sea modificada."
#define STRING_FEEDBACK_TAG_NOCAL    "La marca especial 'nocal' mantendrá esta tarea fuera del informe 'calendar'."
#define STRING_FEEDBACK_TAG_NEXT     "La etiqueta especial 'next' aumentará la urgencia de esta tarea para que aparezca en el informe 'next'."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Las marcas virtuales (incluída '{1}') están reservadas y no pueden ser añadidas o eliminadas."
#define STRING_FEEDBACK_UNBLOCKED    "Desbloqueada {1} '{2}'."
#define STRING_FEEDBACK_EXPIRED      "La tarea {1} '{2}' caducó y fue eliminada."
#define STRING_FEEDBACK_BACKLOG_N    "Hay {1} modificaciones locales.  Se require una sincronización."
#define STRING_FEEDBACK_BACKLOG      "Hay {1} modificaciones locales.  Se require una sincronización."

// 'show' command
#define STRING_CMD_SHOW              "Muestra todas las variables de configuración o un subconjunto"
#define STRING_CMD_SHOW_ARGS         "Solo puede especificar 'all' o un término de búsqueda."
#define STRING_CMD_SHOW_NONE         "No hay variables de configuración que coincidan."
#define STRING_CMD_SHOW_UNREC        "Su archivo .taskrc contiene estas variables no reconocidas:"
#define STRING_CMD_SHOW_DIFFER       "Algunas de sus variables .taskrc difieren de los valores por defecto."
#define STRING_CMD_SHOW_EMPTY        "Error de configuración: .taskrc no contiene ninguna entrada."
#define STRING_CMD_SHOW_DIFFER_COLOR "Las cambiadas aparecen resaltadas en {1} más arriba."
#define STRING_CMD_SHOW_CONFIG_ERROR "Error de configuración: {1} contiene un valor '{2}' no reconocido."
#define STRING_CMD_SHOW_NO_LOCATION  "Error de configuración: data.location no especificado en el archivo .taskrc ."
#define STRING_CMD_SHOW_LOC_EXIST    "Error de configuración: data.location contiene un nombre de directorio que no existe o no se puede leer."
#define STRING_CMD_SHOW_CONF_VAR     "Variable Config"
#define STRING_CMD_SHOW_CONF_VALUE   "Valor"
#define STRING_CMD_SHOW_CONF_DEFAULT "Valor por defecto"
#define STRING_CMD_SHOWRAW           "Muestra todas las variables de configuración en un formato legible por la máquina"

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior ya no admite el formato de archivo 1, usado originalmente entre el 27 de noviembre de 2006 y el 31 de diciembre de 2007."
#define STRING_TASK_NO_FF2           "Taskwarrior ya no admite el formato de archivo 2, usado originalmente entre el 1 de enero de 2008 y el 12 de abril de 2009."
#define STRING_TASK_NO_FF3           "Taskwarrior ya no admite el formato de archivo 3, usado originalmente entre el 23 de marzo de 2009 y el  16 de mayo de 2009."
#define STRING_TASK_PARSE_UNREC_FF   "Formato de archivo taskwarrior no reconocido."
#define STRING_TASK_DEPEND_ITSELF    "Una tarea no puede depender de sí misma."
#define STRING_TASK_DEPEND_MISS_CREA "No se pudo crear una dependencia de la tarea {1} - no encontrada."
#define STRING_TASK_DEPEND_MISS_DEL  "No se pudo eliminar una dependencia de la tarea {1} - no encontrada."
#define STRING_TASK_DEPEND_DUP       "La tarea {1} ya depende de la tarea {2}."
#define STRING_TASK_DEPEND_CIRCULAR  "Dependencia circular detectada y anulada."
#define STRING_TASK_VALID_DESC       "Una tarea debe tener descripción."
#define STRING_TASK_VALID_BLANK      "No se puede añadir una tarea que está en blanco."
#define STRING_TASK_VALID_BEFORE     "Advertencia: ha especificado que la fecha '{1}' es después de la fecha '{2}'."
#define STRING_TASK_VALID_REC_DUE    "Una tarea recurrente debe tener también una fecha de vencimiento."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "Se impidió la ejecución del comando."
#define STRING_TASK_SAFETY_ALLOW     "No especificó un filtro, y con el valor de 'allow.empty.filter', no se toma ninguna acción."
#define STRING_TASK_INVALID_COL_TYPE "Tipo de columna no reconocido '{1}' para la columna '{2}'"

#endif
