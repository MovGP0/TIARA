/* Ghidra address: 00b11bb0 */
/* Ghidra symbol: FUN_00b11bb0 */


void FUN_00b11bb0(longlong *param_1,int param_2,int param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  FUN_0084a070(param_1,param_2,param_3,param_4);
  FUN_00b11830(param_1);
  plVar4 = (longlong *)FUN_00b11070(param_1);
  iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
  if ((iVar2 <= param_3 - (int)param_1[0x98]) && (param_4 != 0)) {
    uVar5 = FUN_00b11070(param_1);
    FUN_004b2dd0(uVar5,0);
    uVar3 = (**(code **)(*(longlong *)param_1[0xc0] + 0x28))((longlong *)param_1[0xc0]);
    *(undefined4 *)(param_1 + 0xc4) = uVar3;
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_28,param_2,param_3);
  iVar2 = FUN_00416db0(param_4,local_28);
  if (iVar2 != 0) {
    if (param_2 == 0) {
      cVar1 = FUN_00b12d30(param_1[0xc0],param_4,0);
      if (cVar1 == '\0') {
        iVar2 = FUN_00416db0(param_1[0xc2],param_4);
        if (iVar2 != 0) {
          FUN_00414ad0(param_1 + 0xc2,param_4);
          goto code_r0x00b11cf8;
        }
      }
    }
    FUN_00414480(param_1 + 0xc2);
    (**(code **)(*param_1 + 0x2e0))(param_1,param_2,param_3,param_4);
  }
code_r0x00b11cf8:
  FUN_00b11870(param_1);
  FUN_00414480(&local_28);
  return;
}

