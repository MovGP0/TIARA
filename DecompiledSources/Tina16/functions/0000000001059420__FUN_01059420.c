/* Ghidra address: 01059420 */
/* Ghidra symbol: FUN_01059420 */


undefined8 * FUN_01059420(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_40 [4];
  
  local_40[0] = 0;
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  if (iVar2 == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"The file list is empty.");
    FUN_004134c0(uVar4);
  }
  (**(code **)(*param_2 + 0x18))(param_2,param_1,0);
  cVar1 = FUN_00440a20(*param_1,1);
  if (cVar1 == '\0') {
    local_58 = *param_1;
    local_50 = 0x11;
    uVar4 = FUN_0044d530(&PTR_FUN_004334c0,1,L"File not found: %s",&local_58,0);
    FUN_004134c0(uVar4);
  }
  uVar3 = FUN_00440970(*param_1);
  dVar6 = (double)FUN_00442290(uVar3);
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  iVar2 = iVar2 + -1;
  iVar5 = 1;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_40,iVar5);
      cVar1 = FUN_00440a20(local_40[0],1);
      if (cVar1 == '\0') {
        local_58 = local_40[0];
        local_50 = 0x11;
        uVar4 = FUN_0044d530(&PTR_FUN_004334c0,1,L"File not found: %s",&local_58,0);
        FUN_004134c0(uVar4);
      }
      uVar3 = FUN_00440970(local_40[0]);
      dVar7 = (double)FUN_00442290(uVar3);
      if (dVar6 < dVar7) {
        FUN_00414ad0(param_1,local_40[0]);
        dVar6 = dVar7;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_40);
  return param_1;
}

