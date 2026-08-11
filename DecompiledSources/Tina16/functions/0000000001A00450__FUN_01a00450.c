/* Ghidra address: 01a00450 */
/* Ghidra symbol: FUN_01a00450 */


void FUN_01a00450(longlong param_1,undefined2 param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 local_90;
  undefined8 local_88;
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
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_40 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_48);
  FUN_019ee820(param_1,&local_40,param_2,local_48,CONCAT44(uVar4,0xb));
  FUN_019f0400(param_1,&local_50,0,0);
  FUN_019f0400(param_1,&local_58,1,0);
  puVar7 = &DAT_01a0081c;
  uVar6 = local_58;
  FUN_00416cd0(&local_38,6,local_40,&DAT_01a0081c,local_50,&DAT_01a0081c,local_58,&DAT_01a0081c);
  pbVar1 = (byte *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,0,&local_29,&local_2a,&local_2b);
  if (pbVar1[0x40] == 0) {
    (**(code **)(**(longlong **)(pbVar1 + 8) + 0x18))(*(longlong **)(pbVar1 + 8),&local_60,0);
    FUN_016b9450(&local_68,**(undefined8 **)(pbVar1 + 0x18));
    FUN_00416880(&local_70,local_68);
    FUN_00416cd0(&local_38,4,local_38,local_60,&DAT_01a0081c,local_70);
  }
  else {
    FUN_0043f750(&local_78,*pbVar1);
    puVar5 = &LAB_01a00844;
    FUN_00416cd0(&local_38,4,local_38,L"POLY(",local_78,&LAB_01a00844,uVar6,puVar7);
    iVar2 = 0;
    uVar3 = (uint)*pbVar1;
    if (-1 < (int)(uVar3 - 1)) {
      do {
        (**(code **)(**(longlong **)(pbVar1 + 8) + 0x18))
                  (*(longlong **)(pbVar1 + 8),&local_80,iVar2);
        FUN_00416cd0(&local_38,3,local_38,local_80,&DAT_01a0081c,puVar5);
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar3 = (uint)*(ushort *)(pbVar1 + 0x10);
    iVar2 = 0;
    if (-1 < (int)(uVar3 - 1)) {
      do {
        FUN_016b9450(&local_88,*(undefined8 *)(*(longlong *)(pbVar1 + 0x18) + (longlong)iVar2 * 8));
        FUN_00416880(&local_90,local_88);
        FUN_00416cd0(&local_38,3,local_38,local_90,&DAT_01a0081c);
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_38);
  FUN_00414480(&local_90);
  FUN_004144d0(&local_88);
  FUN_00414560(&local_80,3);
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,6);
  return;
}

