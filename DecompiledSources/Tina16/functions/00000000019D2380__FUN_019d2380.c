/* Ghidra address: 019d2380 */
/* Ghidra symbol: FUN_019d2380 */


void FUN_019d2380(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_019d2280(param_1);
  if (cVar2 != '\0') {
    FUN_019d0d20(param_1,*(undefined8 *)(param_1 + 8));
    lVar1 = *(longlong *)(param_1 + 8);
    if ((*(short *)(lVar1 + 0x1fa4) == 0x50) || (*(short *)(lVar1 + 0x1fa4) == 0x53)) {
      FUN_0123a9c0(lVar1,0x4c,*(undefined8 *)(param_1 + 0x20));
      FUN_0123a9c0(*(undefined8 *)(param_1 + 8),0x48,*(undefined8 *)(param_1 + 0x28));
      FUN_019d0af0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x80));
      FUN_019d1f20(param_1,*(undefined8 *)(param_1 + 0x20));
      FUN_019d0af0(param_1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x80));
      FUN_019d1f20(param_1,*(undefined8 *)(param_1 + 0x28));
      if (*(short *)(*(longlong *)(param_1 + 8) + 0x1fa4) == 0x50) {
        FUN_019d1540(param_1,*(undefined8 *)(param_1 + 0x28),L"Passband");
        FUN_019d1540(param_1,*(undefined8 *)(param_1 + 0x20),L"Stopband");
      }
      else {
        FUN_019d1540(param_1,*(undefined8 *)(param_1 + 0x20),L"Passband");
        FUN_019d1540(param_1,*(undefined8 *)(param_1 + 0x28),L"Stopband");
      }
    }
    else {
      FUN_019d0af0(param_1,lVar1,0);
      FUN_019d1f20(param_1,*(undefined8 *)(param_1 + 8));
      FUN_019d1540(param_1,*(undefined8 *)(param_1 + 8),L"Passband");
      FUN_019d1540(param_1,*(undefined8 *)(param_1 + 8),L"Stopband");
    }
  }
  return;
}

