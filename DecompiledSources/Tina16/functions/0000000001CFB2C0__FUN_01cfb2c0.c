/* Ghidra address: 01cfb2c0 */
/* Ghidra symbol: FUN_01cfb2c0 */


void FUN_01cfb2c0(longlong param_1,longlong param_2,byte *param_3)

{
  char cVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  longlong local_res8 [4];
  uint uVar5;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  bVar3 = 0;
  uVar5 = 0;
  if (local_res8[0] != 0) {
    uVar5 = *(uint *)(local_res8[0] + -4);
  }
  uVar2 = 1;
  bVar4 = (byte)uVar5;
  while (bVar4 != 0) {
    cVar1 = (char)uVar2;
    if (*(short *)(local_res8[0] + -2 + uVar2 * 2) == 0x7e) {
      bVar3 = bVar3 + 1;
      if ((uint)bVar3 % 2 == 1) {
        *(byte *)(param_2 + -1 + (ulonglong)bVar3) = (cVar1 - bVar3) + '\x01';
      }
      else {
        *(byte *)(param_2 + -1 + (ulonglong)bVar3) = cVar1 - bVar3;
      }
    }
    uVar2 = (ulonglong)(byte)(cVar1 + 1);
    bVar4 = (char)uVar5 - 1;
    uVar5 = (uint)bVar4;
  }
  *param_3 = bVar3;
  FUN_00414480(local_res8);
  return;
}

