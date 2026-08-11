/* Ghidra address: 00590ca0 */
/* Ghidra symbol: FUN_00590ca0 */


void FUN_00590ca0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  if (((ulonglong)pcVar2 & 0xff00000000000000) == 0xff00000000000000) {
    puVar1 = (undefined8 *)((longlong)param_2 + ((ulonglong)pcVar2 & 0xffffffffffffff));
    *puVar1 = *param_4;
    puVar1[1] = param_4[1];
    puVar1[2] = param_4[2];
    puVar1[3] = param_4[3];
  }
  else {
    if (((ulonglong)pcVar2 & 0xff00000000000000) == 0xfe00000000000000) {
      pcVar2 = *(code **)(*param_2 + ((ulonglong)pcVar2 & 0xffff));
    }
    if (*(int *)(param_3 + 0x20) == -0x80000000) {
      (*pcVar2)(param_2,param_4);
    }
    else {
      (*pcVar2)(param_2,*(int *)(param_3 + 0x20),param_4);
    }
  }
  return;
}

