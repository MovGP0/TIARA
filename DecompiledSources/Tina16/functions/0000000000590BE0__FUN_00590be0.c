/* Ghidra address: 00590be0 */
/* Ghidra symbol: FUN_00590be0 */


undefined8 * FUN_00590be0(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_4 + 8);
  if (((ulonglong)pcVar2 & 0xff00000000000000) == 0xff00000000000000) {
    puVar1 = (undefined8 *)((longlong)param_3 + ((ulonglong)pcVar2 & 0xffffffffffffff));
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    param_2[3] = puVar1[3];
  }
  else {
    if (((ulonglong)pcVar2 & 0xff00000000000000) == 0xfe00000000000000) {
      pcVar2 = *(code **)(*param_3 + ((ulonglong)pcVar2 & 0xffff));
    }
    if (*(int *)(param_4 + 0x20) == -0x80000000) {
      (*pcVar2)(param_3,param_2);
    }
    else {
      (*pcVar2)(param_3,param_2,*(int *)(param_4 + 0x20));
    }
  }
  return param_2;
}

