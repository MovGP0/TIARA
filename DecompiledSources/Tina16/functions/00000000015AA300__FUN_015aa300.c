/* Ghidra address: 015aa300 */
/* Ghidra symbol: FUN_015aa300 */


undefined8 * FUN_015aa300(longlong param_1,undefined8 *param_2,byte *param_3,int param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  int local_res20;
  
  FUN_004144d0(param_2);
  if (param_3 != (byte *)0x0) {
    local_res20 = param_4;
    if (param_4 < 0) {
      local_res20 = FUN_00414ce0(param_3);
    }
    if (local_res20 != 0) {
      FUN_00415d10(param_2,local_res20 * 2,0);
      lVar1 = (**(code **)(param_1 + 0x28))(param_1);
      puVar2 = (undefined1 *)FUN_00415ab0(*param_2);
      for (; 0 < local_res20; local_res20 = local_res20 + -1) {
        *puVar2 = *(undefined1 *)(lVar1 + (ulonglong)(*param_3 >> 4));
        puVar2[1] = *(undefined1 *)(lVar1 + (ulonglong)(*param_3 & 0xf));
        puVar2 = puVar2 + 2;
        param_3 = param_3 + 1;
      }
    }
  }
  return param_2;
}

