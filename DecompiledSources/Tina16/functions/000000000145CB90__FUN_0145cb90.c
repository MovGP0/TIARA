/* Ghidra address: 0145cb90 */
/* Ghidra symbol: FUN_0145cb90 */


void FUN_0145cb90(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar2 = *(char **)(*(longlong *)(param_1 + 0x130) + 8);
  while ((pcVar2 != (char *)0x0 && (*(char *)(*(longlong *)(param_1 + 0x130) + 0x92) == '\0'))) {
    if ((byte)(*pcVar2 - 0x20U) < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x130) >> 8),1) <<
               (*pcVar2 - 0x20U & 0x1f) & 0x60U) != 0;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (pcVar2[0xa4] != '\0')) {
      lVar1 = *(longlong *)(pcVar2 + 0xb0);
      *(undefined8 *)(pcVar2 + 0xb0) = *(undefined8 *)(lVar1 + 0xb0);
      FUN_004095f0(lVar1);
    }
    pcVar2 = *(char **)(pcVar2 + 0xb0);
  }
  return;
}

