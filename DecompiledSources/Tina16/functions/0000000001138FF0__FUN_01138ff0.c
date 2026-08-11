/* Ghidra address: 01138ff0 */
/* Ghidra symbol: FUN_01138ff0 */


undefined8 FUN_01138ff0(longlong param_1,undefined1 *param_2)

{
  while (((*(char *)(param_1 + 0xa8a) != '\0' && (*(char *)(param_1 + 0xa8b) == '\0')) &&
         (*(char *)(param_1 + 0xa09) != '\0'))) {
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  *param_2 = *(undefined1 *)(param_1 + 0xa8b);
  *(undefined1 *)(param_1 + 0xa8b) = 0;
  *(undefined1 *)(param_1 + 0xa8c) = 1;
  return *(undefined8 *)(param_1 + 0xa60);
}

