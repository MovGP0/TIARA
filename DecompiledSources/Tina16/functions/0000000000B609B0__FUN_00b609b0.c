/* Ghidra address: 00b609b0 */
/* Ghidra symbol: FUN_00b609b0 */


void FUN_00b609b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 local_58;
  ushort local_4a;
  ushort local_48;
  ushort local_46;
  ushort local_44;
  undefined1 local_41;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_58 = 0;
  FUN_00415d10(&local_58,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x14),0);
  FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_58,
               *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x14));
  FUN_00b3a730(local_40,local_58,&local_41,&local_44,&local_46,&local_48,&local_4a);
  iVar1 = FUN_00416420(local_40[0],0);
  if (iVar1 != 0) {
    uVar4 = (uint)local_44;
    if (uVar4 <= local_46) {
      iVar1 = (local_46 - uVar4) + 1;
      do {
        uVar5 = (uint)local_48;
        if (uVar5 <= local_4a) {
          iVar6 = (local_4a - uVar5) + 1;
          do {
            lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                                 *(undefined4 *)(param_1 + 0x40));
            uVar3 = FUN_00b4fb40(*(undefined8 *)(lVar2 + 0x10),uVar4,uVar5);
            FUN_00b4f2c0(uVar3,local_40[0]);
            FUN_00b4f480(uVar3,local_41);
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar4 = uVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_004144d0(&local_58);
  FUN_00414520(local_40);
  return;
}

