/* Ghidra address: 01613fe0 */
/* Ghidra symbol: FUN_01613fe0 */


void FUN_01613fe0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  byte *local_30;
  
  uVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_30);
  if (*local_30 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (*local_30 & 0x1f) & 0xfeU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_004095f0(*(undefined8 *)(local_30 + 1));
    if (*(longlong *)(local_30 + 9) != 0) {
      uVar3 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*local_30 - 1];
      iVar2 = 0;
      if (-1 < (int)(uVar3 - 1)) {
        do {
          FUN_004095f0(*(undefined8 *)(*(longlong *)(local_30 + 9) + (longlong)iVar2 * 8));
          iVar2 = iVar2 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    FUN_004095f0(*(undefined8 *)(local_30 + 9));
  }
  *local_30 = 9;
  *(undefined8 *)(local_30 + 1) = *param_2;
  *(undefined8 *)(local_30 + 9) = param_2[1];
  *(undefined8 *)(local_30 + 0x11) = param_2[2];
  *(undefined8 *)(local_30 + 0x19) = param_2[3];
  return;
}

