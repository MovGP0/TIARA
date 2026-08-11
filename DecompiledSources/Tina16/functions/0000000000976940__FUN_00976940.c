/* Ghidra address: 00976940 */
/* Ghidra symbol: FUN_00976940 */


void FUN_00976940(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_31;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00947610(&local_28,param_3);
  cVar1 = '\0';
  uVar2 = 0;
  if (local_28 != 0) {
    uVar2 = *(uint *)(local_28 + -4) >> 1;
  }
  if (*(short *)(local_28 + -2 + (longlong)(int)uVar2 * 2) == 0x2a) {
    cVar1 = '\x03';
    uVar2 = 0;
    if (local_28 != 0) {
      uVar2 = *(uint *)(local_28 + -4) >> 1;
    }
    FUN_00416430(&local_20,local_28,1,uVar2 - 1);
    FUN_00414be0(&local_28,local_20);
  }
  uVar2 = 0;
  if (local_28 != 0) {
    uVar2 = *(uint *)(local_28 + -4) >> 1;
  }
  if (uVar2 == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
    FUN_004134c0(uVar4);
  }
  uVar2 = 0;
  if (local_28 != 0) {
    uVar2 = *(uint *)(local_28 + -4) >> 1;
  }
  if (*(short *)(local_28 + -2 + (longlong)(int)uVar2 * 2) != 0x29) {
    uVar4 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
    FUN_004134c0(uVar4);
  }
  FUN_00947190(local_28,&local_20,&local_31);
  if (local_31 == '\0') {
    iVar3 = FUN_00416420(local_20,0);
    if (iVar3 != 0) goto LAB_00976a9a;
  }
  uVar4 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
  FUN_004134c0(uVar4);
LAB_00976a9a:
  FUN_00414be0(&local_28,local_20);
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0,0);
  *(char *)(lVar5 + 0x2a) = cVar1;
  (**(code **)(*param_2 + 0x20))(param_2,lVar5);
  iVar3 = FUN_00416420(local_28,L"#PCDATA");
  if (iVar3 == 0) {
    if ((cVar1 != '\0') && (cVar1 != '\x03')) {
      uVar4 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
      FUN_004134c0(uVar4);
    }
  }
  else {
    if (cVar1 != '\x03') {
      uVar4 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
      FUN_004134c0(uVar4);
    }
    iVar3 = FUN_00417170(&DAT_00976d90,local_28,1);
    if (iVar3 == 0) {
      uVar4 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
      FUN_004134c0(uVar4);
    }
    uVar2 = 0;
    if (local_28 != 0) {
      uVar2 = *(uint *)(local_28 + -4) >> 1;
    }
    FUN_00416430(&local_40,local_28,iVar3 + 1,uVar2 - iVar3);
    FUN_00947610(&local_20,local_40);
    FUN_00414be0(&local_28,local_20);
    while( true ) {
      iVar3 = FUN_00416420(local_28,0);
      if (iVar3 == 0) break;
      iVar3 = FUN_00417170(&DAT_00976d90,local_28,1);
      if (iVar3 == 0) {
        FUN_00414be0(&local_30,local_28);
        FUN_00414520(&local_28);
      }
      else {
        FUN_00416430(&local_48,local_28,1,iVar3 + -1);
        FUN_00947610(&local_30,local_48);
        uVar2 = 0;
        if (local_28 != 0) {
          uVar2 = *(uint *)(local_28 + -4) >> 1;
        }
        FUN_00416430(&local_50,local_28,iVar3 + 1,uVar2 - iVar3);
        FUN_00947610(&local_20,local_50);
        FUN_00414be0(&local_28,local_20);
        iVar3 = FUN_00416420(local_28,0);
        if (iVar3 == 0) {
          uVar4 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
          FUN_004134c0(uVar4);
        }
      }
      cVar1 = FUN_008ff6c0(local_30);
      if (cVar1 == '\0') {
        uVar4 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
        FUN_004134c0(uVar4);
      }
      (**(code **)(*param_2 + 0x10))(param_2,local_30,1);
      (**(code **)**(undefined8 **)(lVar5 + 0x38))(*(undefined8 **)(lVar5 + 0x38));
    }
  }
  FUN_004145c0(&local_50,3);
  FUN_004145c0(&local_30,3);
  return;
}

