/* Ghidra address: 00bcf6d0 */
/* Ghidra symbol: FUN_00bcf6d0 */


undefined8 * FUN_00bcf6d0(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong local_30 [2];
  char local_19;
  
  local_30[0] = 0;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)param_3 * 0x28);
  iVar2 = 0;
  if (*plVar1 != 0) {
    iVar2 = *(int *)(*plVar1 + -4);
  }
  if (iVar2 == 0) {
    FUN_00414480(param_2);
    *(byte *)(plVar1 + 4) = *(byte *)(plVar1 + 4) & 0xfb;
    *(byte *)(plVar1 + 4) = *(byte *)(plVar1 + 4) & 0xfe;
    *(byte *)(plVar1 + 4) = *(byte *)(plVar1 + 4) | 2;
    *(undefined4 *)(plVar1 + 3) = 0;
  }
  else {
    (**(code **)(param_1 + 0x50))(param_2,*plVar1,*(undefined4 *)(param_1 + 0x5c),&local_19);
    (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x68),local_30,*param_2);
    uVar3 = 0;
    if (local_30[0] != 0) {
      uVar3 = *(undefined4 *)(local_30[0] + -4);
    }
    *(undefined4 *)(plVar1 + 3) = uVar3;
    *(byte *)(plVar1 + 4) = *(byte *)(plVar1 + 4) & 0xfb;
    *(byte *)(plVar1 + 4) = *(byte *)(plVar1 + 4) & 0xfe;
    *(byte *)(plVar1 + 4) = *(byte *)(plVar1 + 4) & 0xfd;
    if (local_19 == '\0') {
      *(byte *)(plVar1 + 4) = *(byte *)(plVar1 + 4) | 2;
    }
    else {
      *(byte *)(plVar1 + 4) = *(byte *)(plVar1 + 4) | 1;
    }
  }
  FUN_00414480(local_30);
  return param_2;
}

