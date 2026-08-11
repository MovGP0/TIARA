/* Ghidra address: 009d91f0 */
/* Ghidra symbol: FUN_009d91f0 */


undefined4 FUN_009d91f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_009d8150(param_1);
  plVar5 = (longlong *)0x0;
  FUN_004168e0(&local_38,param_3);
  uVar3 = FUN_00414520(&local_20);
  uVar4 = FUN_00414520(&local_28);
  cVar1 = FUN_009479a0(local_38,uVar3,uVar4);
  if (cVar1 != '\0') {
    plVar5 = (longlong *)FUN_009d81f0(param_1);
    FUN_004168e0(&local_40,param_2);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2d0))(plVar5,local_40,local_28);
  }
  if (plVar5 != (longlong *)0x0) {
    iVar2 = FUN_00416db0(param_2,L"http://www.w3.org/2000/xmlns/");
    if (iVar2 == 0) {
      (**(code **)(*plVar5 + 0x180))(plVar5,&local_48);
      iVar2 = FUN_00416420(local_48,local_20);
      if (iVar2 == 0) {
        (**(code **)(*plVar5 + 0x148))(plVar5,&local_50);
        iVar2 = FUN_00416420(local_50,local_28);
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x2e0))(plVar5,&local_58);
          FUN_004168b0(&local_60,local_58);
          iVar2 = FUN_00416db0(local_60,param_4);
          if (iVar2 == 0) goto LAB_009d941a;
        }
      }
    }
  }
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_009d81f0(param_1);
    FUN_004168e0(&local_70,param_2);
    FUN_004168e0(&local_78,param_3);
    FUN_004168e0(&local_80,param_4);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x348))(plVar5,local_70,local_78,local_80);
  }
  else {
    FUN_004168e0(&local_68,param_4);
    (**(code **)(*plVar5 + 0x1a0))(plVar5,local_68);
  }
  FUN_009d4ed0(param_1,plVar5);
LAB_009d941a:
  local_30 = 0;
  FUN_004145c0(&local_80,4);
  FUN_00414480(&local_60);
  FUN_004145c0(&local_58,5);
  FUN_004145c0(&local_28,2);
  return local_30;
}

