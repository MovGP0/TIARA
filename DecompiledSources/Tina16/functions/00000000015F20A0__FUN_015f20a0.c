/* Ghidra address: 015f20a0 */
/* Ghidra symbol: FUN_015f20a0 */


void FUN_015f20a0(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong unaff_RBX;
  undefined6 uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 local_238;
  undefined8 local_230;
  byte local_228;
  byte local_227 [255];
  undefined1 local_128 [264];
  
  local_230 = 0;
  local_238 = 0;
  FUN_00416910(&local_228,*param_1,0xff);
  local_128[0] = 0;
  uVar5 = (uint)local_228;
  if (uVar5 != 0) {
    pbVar4 = local_227;
    do {
      bVar1 = *pbVar4;
      uVar3 = (undefined6)(unaff_RBX >> 0x10);
      unaff_RBX = CONCAT62(uVar3,(ushort)bVar1);
      cVar2 = FUN_01b215c0(unaff_RBX & 0xffffffff,1);
      if (cVar2 == '\0') {
        cVar2 = FUN_01b215f0(unaff_RBX & 0xffffffff);
        if ((cVar2 == '\0') && (bVar1 != 0x2e)) {
          unaff_RBX = CONCAT62(uVar3,0x5f);
        }
      }
      FUN_004169a0(&local_230,local_128);
      FUN_00416780(&local_238,unaff_RBX & 0xffffffff);
      FUN_00416ad0(&local_230,local_238);
      FUN_00416910(local_128,local_230,0xff);
      pbVar4 = pbVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_004169a0(param_1,local_128);
  FUN_00414560(&local_238,2);
  return;
}

