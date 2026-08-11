/* Ghidra address: 0070e3f0 */
/* Ghidra symbol: FUN_0070e3f0 */


void FUN_0070e3f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined7 uVar9;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong uVar10;
  undefined1 local_44 [12];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  plVar4 = (longlong *)FUN_00777cd0();
  cVar2 = (**(code **)(*plVar4 + 0x90))(plVar4);
  if (cVar2 != '\0') {
    uVar5 = FUN_00777cd0();
    uVar6 = FUN_00786090(param_1);
    uVar7 = FUN_005ffa40(param_2);
    uVar10 = 0;
    FUN_00778ec0(uVar5,uVar6,uVar7,local_44,in_stack_ffffffffffffffa8 & 0xffffffffffffff00,0);
    cVar2 = FUN_0070e380(param_1);
    if (cVar2 == '\0') {
      lVar1 = **(longlong **)(param_1 + 0x10);
      (**(code **)(lVar1 + 0xe0))(*(longlong **)(param_1 + 0x10),&local_38);
      iVar3 = FUN_004230a0(&local_38);
      local_30 = local_38 + iVar3 / 2;
      uVar9 = (undefined7)((ulonglong)lVar1 >> 8);
      if (*(char *)(param_1 + 0x40) == '\0') {
        if ((*(char *)(param_1 + 0x42) == '\0') || (*(char *)(param_1 + 0x38) == '\0')) {
          uVar8 = (undefined4)CONCAT71(uVar9,10);
        }
        else {
          uVar8 = (undefined4)CONCAT71(uVar9,0xb);
        }
      }
      else {
        uVar8 = (undefined4)CONCAT71(uVar9,0xc);
      }
      plVar4 = (longlong *)FUN_00777cd0(local_30,(longlong)iVar3 % 2 & 0xffffffff);
      (**(code **)(*plVar4 + 0x198))(plVar4,local_44,uVar8);
      uVar5 = FUN_00777cd0();
      uVar6 = FUN_005ffa40(param_2);
      uVar10 = uVar10 & 0xffffffff00000000;
      FUN_00778dc0(uVar5,uVar6,local_44,&local_38,0,uVar10);
      lVar1 = **(longlong **)(param_1 + 0x10);
      (**(code **)(lVar1 + 0xe0))(*(longlong **)(param_1 + 0x10),&local_38);
      iVar3 = FUN_004230a0(&local_38);
      local_38 = local_30 - iVar3 / 2;
      uVar9 = (undefined7)((ulonglong)lVar1 >> 8);
      if (*(char *)(param_1 + 0x41) == '\0') {
        if ((*(char *)(param_1 + 0x43) == '\0') || (*(char *)(param_1 + 0x38) == '\0')) {
          uVar8 = (undefined4)CONCAT71(uVar9,0xe);
        }
        else {
          uVar8 = (undefined4)CONCAT71(uVar9,0xf);
        }
      }
      else {
        uVar8 = (undefined4)CONCAT71(uVar9,0x10);
      }
      plVar4 = (longlong *)FUN_00777cd0(local_38,(longlong)iVar3 % 2 & 0xffffffff);
      (**(code **)(*plVar4 + 0x198))(plVar4,local_44,uVar8);
      uVar5 = FUN_00777cd0();
      uVar6 = FUN_005ffa40(param_2);
      FUN_00778dc0(uVar5,uVar6,local_44,&local_38,0,uVar10 & 0xffffffff00000000);
    }
    else {
      lVar1 = **(longlong **)(param_1 + 0x10);
      (**(code **)(lVar1 + 0xe0))(*(longlong **)(param_1 + 0x10),&local_38);
      iVar3 = FUN_004230c0(&local_38);
      local_2c = local_34 + iVar3 / 2;
      uVar9 = (undefined7)((ulonglong)lVar1 >> 8);
      if (*(char *)(param_1 + 0x40) == '\0') {
        if ((*(char *)(param_1 + 0x42) == '\0') || (*(char *)(param_1 + 0x38) == '\0')) {
          uVar8 = (undefined4)CONCAT71(uVar9,2);
        }
        else {
          uVar8 = (undefined4)CONCAT71(uVar9,3);
        }
      }
      else {
        uVar8 = (undefined4)CONCAT71(uVar9,4);
      }
      plVar4 = (longlong *)FUN_00777cd0(local_2c,(longlong)iVar3 % 2 & 0xffffffff);
      (**(code **)(*plVar4 + 0x198))(plVar4,local_44,uVar8);
      uVar5 = FUN_00777cd0();
      uVar6 = FUN_005ffa40(param_2);
      uVar10 = uVar10 & 0xffffffff00000000;
      FUN_00778dc0(uVar5,uVar6,local_44,&local_38,0,uVar10);
      lVar1 = **(longlong **)(param_1 + 0x10);
      (**(code **)(lVar1 + 0xe0))(*(longlong **)(param_1 + 0x10),&local_38);
      iVar3 = FUN_004230c0(&local_38);
      local_34 = local_2c - iVar3 / 2;
      uVar9 = (undefined7)((ulonglong)lVar1 >> 8);
      if (*(char *)(param_1 + 0x41) == '\0') {
        if ((*(char *)(param_1 + 0x43) == '\0') || (*(char *)(param_1 + 0x38) == '\0')) {
          uVar8 = (undefined4)CONCAT71(uVar9,6);
        }
        else {
          uVar8 = (undefined4)CONCAT71(uVar9,7);
        }
      }
      else {
        uVar8 = (undefined4)CONCAT71(uVar9,8);
      }
      plVar4 = (longlong *)FUN_00777cd0(local_34,(longlong)iVar3 % 2 & 0xffffffff);
      (**(code **)(*plVar4 + 0x198))(plVar4,local_44,uVar8);
      uVar5 = FUN_00777cd0();
      uVar6 = FUN_005ffa40(param_2);
      FUN_00778dc0(uVar5,uVar6,local_44,&local_38,0,uVar10 & 0xffffffff00000000);
    }
  }
  return;
}

