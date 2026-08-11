/* Ghidra address: 0041d670 */
/* Ghidra symbol: FUN_0041d670 */


ulonglong FUN_0041d670(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    if (param_1 == 0) {
      uVar2 = FUN_0041de60(0xfde9,0,param_3,param_4,0,0,0,0);
    }
    else {
      uVar2 = FUN_0041de60(0xfde9,0,param_3,param_4,param_1,param_2,0,0);
      uVar1 = (uint)uVar2;
      if (((uVar1 != 0) && (uVar1 <= param_2)) &&
         ((param_4 != -1 || (*(char *)(param_1 + (ulonglong)(uVar1 - 1)) != '\0')))) {
        if (uVar1 == param_2) {
          while ((((uVar1 = (uint)uVar2, 1 < uVar1 &&
                   (0x7f < *(byte *)(param_1 + (ulonglong)(uVar1 - 1)))) &&
                  ((*(byte *)(param_1 + (ulonglong)(uVar1 - 1)) & 0x80) != 0)) &&
                 ((*(byte *)(param_1 + (ulonglong)(uVar1 - 1)) & 0xc0) != 0xc0))) {
            uVar2 = (ulonglong)(uVar1 - 1);
          }
        }
        else {
          uVar2 = (ulonglong)(uVar1 + 1);
        }
        *(undefined1 *)(param_1 + (ulonglong)((int)uVar2 - 1)) = 0;
      }
    }
  }
  return uVar2;
}

