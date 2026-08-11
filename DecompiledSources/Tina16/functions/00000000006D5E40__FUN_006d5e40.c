/* Ghidra address: 006d5e40 */
/* Ghidra symbol: FUN_006d5e40 */


void FUN_006d5e40(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar2 = (**(code **)(*(longlong *)param_1[0x99] + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*(longlong *)param_1[0x99] + 0x18))((longlong *)param_1[0x99],local_30,iVar4);
      cVar1 = FUN_007f9a80(*(undefined2 *)(param_2 + 8),local_30[0]);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*param_1 + 0x260))(param_1,iVar4);
        if (cVar1 != '\0') {
          pcVar3 = (code *)FUN_00411550(param_1,0xffb3);
          cVar1 = (*pcVar3)(param_1);
          if (cVar1 != '\0') {
            *(undefined8 *)(param_2 + 0x18) = 1;
            pcVar3 = (code *)FUN_00411550(param_1,0xffac);
            cVar1 = (*pcVar3)(param_1);
            if (cVar1 != '\0') {
              (**(code **)(*param_1 + 0x278))(param_1,iVar4);
              pcVar3 = (code *)FUN_00411550(param_1,0xffab);
              (*pcVar3)(param_1);
            }
            goto LAB_006d5f50;
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0065a1c0(param_1,param_2);
LAB_006d5f50:
  FUN_00414480(local_30);
  return;
}

