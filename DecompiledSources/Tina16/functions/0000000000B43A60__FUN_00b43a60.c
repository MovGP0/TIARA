/* Ghidra address: 00b43a60 */
/* Ghidra symbol: FUN_00b43a60 */


void FUN_00b43a60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_2c;
  
  local_40 = param_1;
  iVar1 = FUN_00b41f80(param_1);
  if (iVar1 != 0) {
    FUN_00b25840(param_2,0xf);
    FUN_00b25840(param_2,0xf000);
    iVar2 = FUN_004b6da0(param_2);
    FUN_00b25870(param_2,0);
    iVar1 = FUN_00b41c90(*(undefined8 *)(local_40 + 0x18));
    FUN_00b25840(param_2,0);
    FUN_00b25840(param_2,0xf006);
    FUN_00b25870(param_2,iVar1 * 8 + 0x10);
    FUN_00b25870(param_2,*(undefined4 *)(*(longlong *)(local_40 + 0x18) + 0x10));
    FUN_00b25870(param_2,iVar1 + 1);
    iVar3 = FUN_00b41f80(local_40);
    FUN_00b25870(param_2,iVar3 + iVar1);
    FUN_00b25870(param_2,1);
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(local_40 + 0x18) + 8) + 0x10);
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(local_40 + 0x18) + 8),iVar3);
        if (lVar4 != 0) {
          FUN_00b25870(param_2,iVar3 + 1);
          lVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(local_40 + 0x18) + 8),iVar3);
          FUN_00b25870(param_2,*(int *)(lVar4 + 0x10) + 1);
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = FUN_00b41f50(local_40);
    if (0 < iVar1) {
      iVar1 = FUN_00b41f50(local_40);
      FUN_00b25840(param_2,CONCAT22((short)((uint)(iVar1 << 4) >> 0x10),(short)(iVar1 << 4) + 0xf));
      FUN_00b25840(param_2,0xf001);
      iVar1 = FUN_004b6da0(param_2);
      FUN_00b25870(param_2,0);
      iVar3 = FUN_00b41f50();
      iVar6 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar5 = FUN_00b41f30(local_40,iVar6);
          FUN_00b43820(auStack_68,uVar5);
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_2c = FUN_004b6da0(param_2);
      FUN_004b6dc0(param_2,(longlong)iVar1);
      FUN_00b25870(param_2,(local_2c - iVar1) + -4);
      FUN_004b6dc0(param_2,(longlong)local_2c);
    }
    FUN_00b25840(param_2,0x33);
    FUN_00b25840(param_2,0xf00b);
    FUN_00b25870(param_2,0x12);
    FUN_00b258a0(param_2,&DAT_01e85d20,0x12);
    FUN_00b25840(param_2,0x40);
    FUN_00b25840(param_2,0xf11e);
    FUN_00b25870(param_2,0x10);
    FUN_00b258a0(param_2,&DAT_01e85d32,0x10);
    local_2c = FUN_004b6da0(param_2);
    FUN_004b6dc0(param_2,(longlong)iVar2);
    FUN_00b25870(param_2,(local_2c - iVar2) + -4);
    FUN_004b6dc0(param_2,(longlong)local_2c);
  }
  return;
}

