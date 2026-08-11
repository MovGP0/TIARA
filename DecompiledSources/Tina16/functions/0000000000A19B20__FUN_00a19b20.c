/* Ghidra address: 00a19b20 */
/* Ghidra symbol: FUN_00a19b20 */


undefined8 FUN_00a19b20(longlong *param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)((longlong)param_1 + 0x21c);
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0x79;
  *(uint *)(lVar1 + 0x2c) = uVar4;
  *(int *)(lVar1 + 0x30) = param_2;
  (**(code **)(lVar1 + 8))(param_1,0xffffffff);
  do {
    while( true ) {
      bVar2 = uVar4 - 0xd0 < 8;
      uVar5 = 0xbf < (int)uVar4 | 2;
      if (0xbf < (int)uVar4 && bVar2) {
        uVar5 = 3;
      }
      if (((uVar4 != (param_2 + 1U & 7 | 0xd0) && (0xbf < (int)uVar4 && bVar2)) &&
          (uVar5 = 3, uVar4 != (param_2 + 2U & 7 | 0xd0))) &&
         (uVar5 = (uVar4 == (param_2 + 6U & 7 | 0xd0)) + 1, uVar4 == (param_2 + 7U & 7 | 0xd0))) {
        uVar5 = 2;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar1 + 0x28) = 0x61;
      *(uint *)(lVar1 + 0x2c) = uVar4;
      *(uint *)(lVar1 + 0x30) = uVar5;
      (**(code **)(lVar1 + 8))(param_1,4);
      if (uVar5 == 3) {
        return 1;
      }
      if (uVar5 == 2) break;
      if (uVar5 == 1) {
        *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
        return 1;
      }
    }
    iVar3 = FUN_00a19c80(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    uVar4 = *(uint *)((longlong)param_1 + 0x21c);
  } while( true );
}

