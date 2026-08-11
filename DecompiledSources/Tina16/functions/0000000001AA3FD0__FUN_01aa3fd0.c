/* Ghidra address: 01aa3fd0 */
/* Ghidra symbol: FUN_01aa3fd0 */


bool FUN_01aa3fd0(byte *param_1,undefined8 param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  byte local_100 [100];
  byte local_9c [124];
  
  iVar1 = 1;
  uVar3 = (uint)*param_1;
  if (uVar3 != 0) {
    pbVar2 = local_100;
    do {
      *pbVar2 = param_1[(longlong)iVar1 + 0x587];
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  bVar4 = local_100[0];
  if (local_100[0] == 3) {
    bVar4 = 0;
  }
  if (param_1[0x563] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_100,1);
  }
  if (param_1[0x564] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_9c,2);
    bVar4 = local_9c[0];
  }
  bVar5 = param_1[0x568] != local_100[0];
  if (bVar5) {
    FUN_01aa3960(param_1,1,param_1 + 0x5a8,param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                 bVar4);
    param_1[0x568] = local_100[0];
  }
  return bVar5;
}

