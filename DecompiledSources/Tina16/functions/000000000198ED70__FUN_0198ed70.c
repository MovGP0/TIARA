/* Ghidra address: 0198ed70 */
/* Ghidra symbol: FUN_0198ed70 */


undefined8 FUN_0198ed70(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if (param_2 != (longlong *)0x0) {
    *(undefined1 *)(param_2 + 1) = 0;
    cVar1 = (**(code **)(*param_2 + 0x88))
                      (param_2,*(undefined8 *)(param_1 + 0x2d8),param_1 + 0x2c8,
                       PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],*PTR_DAT_020037e8,
                       PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0xa0))(param_2,*(undefined8 *)(param_1 + 0x2d8));
    }
  }
  return 0;
}

