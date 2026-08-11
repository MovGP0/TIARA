/* Ghidra address: 00c2a590 */
/* Ghidra symbol: FUN_00c2a590 */


void FUN_00c2a590(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  char local_19 [9];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  FUN_00c28830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))(*(longlong **)(param_1 + 0x58),param_2);
  iVar5 = (**(code **)(*param_2 + 0x18))(param_2,local_19,1);
  if (iVar5 == 1) {
    (**(code **)(*param_2 + 0x48))(param_2,0xffffffff,1);
    if ((local_19[0] != ';') && (local_19[0] != '\0')) {
      FUN_00c1a3e0(param_2,param_1 + 0x48,10);
      if (*(char *)(param_1 + 0x48) != ',') {
        FUN_0041ddd0(local_30,PTR_PTR_020050a0);
        FUN_00c1a320(local_30[0]);
      }
      bVar1 = 0xffff < (uint)*(ushort *)(param_1 + 0x49) + (uint)*(ushort *)(param_1 + 0x4d);
      if (bVar1) {
        *(ushort *)(param_1 + 0x4d) = *(ushort *)(param_1 + 0x49) + *(ushort *)(param_1 + 0x4d);
      }
      bVar2 = 0xffff < (uint)*(ushort *)(param_1 + 0x4b) + (uint)*(ushort *)(param_1 + 0x4f);
      if (bVar2) {
        *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4b) + *(ushort *)(param_1 + 0x4f);
      }
      if (bVar2 || bVar1) {
        FUN_0041ddd0(&local_38,PTR_PTR_02003050);
        FUN_00c1a780(param_1,1,local_38);
      }
      if ((*(short *)(param_1 + 0x4f) == 0) || (*(short *)(param_1 + 0x4d) == 0)) {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
        *(undefined2 *)(param_1 + 0x4f) = uVar4;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
        *(undefined2 *)(param_1 + 0x4d) = uVar4;
        FUN_0041ddd0(&local_40,PTR_PTR_02002dc0);
        FUN_00c1a780(param_1,1,local_40);
      }
      if ((*(byte *)(param_1 + 0x51) & 0x80) == 0x80) {
        iVar5 = 2 << (*(byte *)(param_1 + 0x51) & 7);
        if ((iVar5 < 2) || (0x100 < iVar5)) {
          FUN_0041ddd0(&local_48,PTR_PTR_02001c10);
          FUN_00c1a320(local_48);
        }
        FUN_00c22ec0(*(undefined8 *)(param_1 + 0x40),param_2,iVar5);
      }
      FUN_00c26980(param_1,param_2);
      cVar3 = FUN_00c28880(param_1);
      if (cVar3 == '\0') {
        FUN_00c2a030(param_1,*(undefined2 *)(param_1 + 0x49),*(undefined2 *)(param_1 + 0x4b),
                     *(undefined2 *)(param_1 + 0x4d),*(undefined2 *)(param_1 + 0x4f));
        if (DAT_01e9f546 != '\0') {
          FUN_00c29a40(param_1);
        }
      }
    }
  }
  FUN_00414560(&local_48,4);
  return;
}

