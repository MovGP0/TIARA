/* Ghidra address: 0085d2e0 */
/* Ghidra symbol: FUN_0085d2e0 */


void FUN_0085d2e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  *(longlong *)(param_2 + 0x280) = *(longlong *)(param_2 + 0x330) + 0x88;
  *(undefined8 *)(param_2 + 0x278) = **(undefined8 **)(param_2 + 0x280);
  **(undefined8 **)(param_2 + 0x280) = 0;
  lVar1 = param_2;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x278));
  if (((*(longlong *)(*(longlong *)(param_2 + 0x330) + 0x90) != 0) && (DAT_02012790 != (code *)0x0))
     && (*(char *)(*(longlong *)(param_2 + 0x330) + 0x68) != '\0')) {
    if (*(uint *)(param_2 + 0x274) < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)lVar1 >> 8),1) <<
               ((byte)*(uint *)(param_2 + 0x274) & 0x1f) & 0xdU) != 0;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      (*DAT_02012790)(*(undefined8 *)(*(longlong *)(param_2 + 0x330) + 0x90),
                      *(undefined4 *)(param_2 + 0x274));
    }
  }
  return;
}

