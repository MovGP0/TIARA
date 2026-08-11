/* Ghidra address: 00b5e910 */
/* Ghidra symbol: FUN_00b5e910 */


void FUN_00b5e910(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_4a;
  undefined8 local_48;
  undefined8 local_40;
  char local_36 [2];
  char local_34;
  char local_30;
  char local_2f;
  ushort local_2e;
  ushort local_2c;
  ushort local_2a [5];
  
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  local_58 = 0;
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_2a);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_2c);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_2e);
  FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_36,8);
  if ((local_30 == -1) && (local_2f == -1)) {
    if (local_36[0] == '\0') {
      *(uint *)(param_1 + 0x48) = (uint)local_2a[0];
      *(uint *)(param_1 + 0x4c) = (uint)local_2c;
      *(uint *)(param_1 + 0x50) = (uint)local_2e;
    }
    else if (local_36[0] == '\x01') {
      if (local_34 == '\x01') {
        uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      }
      else {
        uVar4 = 0;
      }
      lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x40));
      uVar3 = FUN_00b4fb40(*(undefined8 *)(lVar2 + 0x10),local_2a[0],local_2c);
      FUN_00468820(&local_70,uVar4 & 0xffffffff);
      FUN_00b4f030(uVar3,&local_70);
    }
  }
  else {
    FUN_00409a70(local_36,&local_40,8);
    lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    uVar3 = FUN_00b4fb40(*(undefined8 *)(lVar2 + 0x10),local_2a[0],local_2c);
    FUN_00468860(&local_88,local_40);
    FUN_00b4f030(uVar3,&local_88);
  }
  lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  uVar3 = FUN_00b4fb40(*(undefined8 *)(lVar2 + 0x10),local_2a[0],local_2c);
  FUN_00b5d680(param_1,uVar3,local_2e);
  if (*(char *)(param_1 + 0x33) != '\0') {
    FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_48,2);
    FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),4);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_4a);
    FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_58,local_4a);
    FUN_004156b0(&local_90,local_48,local_58);
    FUN_00b193b0(*(undefined8 *)(param_1 + 0x90),local_90);
    lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    uVar3 = FUN_00b4fb40(*(undefined8 *)(lVar2 + 0x10),local_2a[0],local_2c);
    iVar1 = FUN_00b19370(*(undefined8 *)(param_1 + 0x90));
    FUN_0043f750(&local_98,iVar1 + -1);
    FUN_00415dd0(&local_a0,local_98,0);
    FUN_00b4f190(uVar3,local_a0);
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_004144d0(&local_a0);
  FUN_00414480(&local_98);
  FUN_004144d0(&local_90);
  FUN_00417840(&local_88,&DAT_004013d8,2);
  FUN_004144d0(&local_58);
  FUN_004144d0(&local_48);
  return;
}

