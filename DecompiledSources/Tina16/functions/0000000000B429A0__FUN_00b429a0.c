/* Ghidra address: 00b429a0 */
/* Ghidra symbol: FUN_00b429a0 */


void FUN_00b429a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  char local_41;
  undefined8 local_40;
  undefined8 local_38;
  ushort local_2a;
  
  local_38 = 0;
  local_40 = 0;
  iVar5 = FUN_00b258c0(param_2);
  if (iVar5 < 10) {
    uVar6 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
    FUN_004134c0(uVar6);
  }
  FUN_00b256e0(param_2,&local_2a);
  uVar1 = local_2a;
  FUN_00b256e0(param_2,&local_2a);
  uVar2 = local_2a;
  FUN_00b257f0(param_2,2);
  FUN_00b256e0(param_2,&local_2a);
  uVar3 = local_2a;
  FUN_00b256e0(param_2,&local_2a);
  if (local_2a == 0) {
    FUN_00414520(&local_40);
  }
  else {
    FUN_00b256b0(param_2,&local_41);
    if (local_41 == '\0') {
      FUN_00415d10(&local_38,local_2a,0);
      FUN_00b257a0(param_2,&local_38,local_2a);
      FUN_00b15390(&local_40,local_38);
    }
    else {
      FUN_00415d10(&local_38,(uint)local_2a * 2,0);
      FUN_00b257a0(param_2,&local_38,(uint)local_2a * 2);
      FUN_00b15310(&local_40,local_38);
    }
  }
  iVar5 = FUN_00b41f90(param_1,uVar3,param_3);
  if (iVar5 < 0) {
    uVar6 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
    FUN_004134c0(uVar6);
  }
  uVar6 = FUN_00b41f60(param_1,iVar5);
  cVar4 = FUN_004113d0(uVar6,&DAT_00b403a0);
  if (cVar4 == '\0') {
    uVar6 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
    FUN_004134c0(uVar6);
  }
  lVar7 = FUN_00b41f60(param_1,iVar5);
  FUN_00414b90(lVar7 + 0x48,local_40);
  *(uint *)(lVar7 + 0x38) = (uint)uVar1;
  *(uint *)(lVar7 + 0x3c) = (uint)uVar2;
  *(undefined4 *)(lVar7 + 8) = param_3;
  FUN_00414520(&local_40);
  FUN_004144d0(&local_38);
  return;
}

