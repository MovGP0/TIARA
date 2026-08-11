/* Ghidra address: 014fbb20 */
/* Ghidra symbol: FUN_014fbb20 */


undefined8 FUN_014fbb20(byte *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  byte local_100 [224];
  
  iVar2 = 1;
  uVar5 = (uint)*param_1;
  if (uVar5 != 0) {
    pbVar4 = local_100;
    do {
      *pbVar4 = param_1[(longlong)iVar2 + 0x587];
      iVar2 = iVar2 + 1;
      pbVar4 = pbVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  bVar6 = local_100[0];
  if (local_100[0] == 3) {
    bVar6 = 0;
  }
  if (param_1[0x568] == local_100[0]) {
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_01aa16f0(*(undefined8 *)(param_1 + 0x550));
    if (cVar1 == '\0') {
      uVar3 = 1;
    }
    else {
      FUN_01aa3960(param_1,1,param_1 + 0x5a8,param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8)
                   ,bVar6);
      uVar3 = 1;
      param_1[0x568] = local_100[0];
    }
  }
  return uVar3;
}

