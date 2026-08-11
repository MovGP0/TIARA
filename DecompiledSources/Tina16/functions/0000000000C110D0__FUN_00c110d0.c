/* Ghidra address: 00c110d0 */
/* Ghidra symbol: FUN_00c110d0 */


void FUN_00c110d0(longlong *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  FUN_00bf3750(param_1);
  local_30[0] = FUN_00c0ee50(param_1,param_2);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_30);
  cVar1 = FUN_00c10e70(param_1);
  if (cVar1 != '\0') {
    iVar3 = (**(code **)(*(longlong *)param_1[0xbf] + 0x28))((longlong *)param_1[0xbf]);
    if (param_2[1] <= iVar3) {
      iVar3 = (**(code **)(*(longlong *)param_1[0xbf] + 0x30))((longlong *)param_1[0xbf],param_2[1])
      ;
      if (iVar3 < *param_2) {
        iVar3 = FUN_00bfaa50(param_1);
        if (iVar3 != param_2[1]) {
          uVar2 = 1;
          goto LAB_00c11153;
        }
      }
    }
  }
  uVar2 = 0;
LAB_00c11153:
  *(undefined1 *)(param_1 + 0xc1) = uVar2;
  FUN_00bf28a0(param_1);
  FUN_00bfac10(param_1);
  return;
}

