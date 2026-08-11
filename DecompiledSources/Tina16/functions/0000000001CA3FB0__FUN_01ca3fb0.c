/* Ghidra address: 01ca3fb0 */
/* Ghidra symbol: FUN_01ca3fb0 */


void FUN_01ca3fb0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = FUN_007f9990(*(undefined4 *)(param_2 + 0x10));
  sVar1 = *(short *)(param_2 + 8);
  if ((ushort)(sVar1 - 0x40U) < 0x20) {
    bVar4 = (1 << ((byte)(sVar1 - 0x40U) & 0x1f) & 0x140000aU) != 0;
  }
  else {
    bVar4 = false;
  }
  if ((((bVar4) && ((uVar3 & 4) != 0)) && ((uVar3 & 2) == 0)) &&
     (*(longlong *)(*(longlong *)PTR_DAT_02005950 + 200) != 0)) {
    cVar2 = FUN_004113d0(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 200),&PTR_FUN_0066ac78);
    if (cVar2 != '\0') {
      if (sVar1 == 0x41) {
        FUN_00680ad0(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 200));
      }
      else if (sVar1 == 0x43) {
        FUN_006809e0(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 200));
      }
      else if (sVar1 == 0x56) {
        FUN_00680a40(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 200));
      }
      else {
        FUN_00680a10(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 200));
      }
      *param_3 = 1;
    }
  }
  return;
}

