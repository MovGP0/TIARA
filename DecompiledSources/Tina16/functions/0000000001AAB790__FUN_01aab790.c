/* Ghidra address: 01aab790 */
/* Ghidra symbol: FUN_01aab790 */


bool FUN_01aab790(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  char cVar3;
  
  pcVar1 = *(char **)(param_1 + 0x10 + (param_2 & 0xffff) * 8);
  uVar2 = 1;
  for (cVar3 = *pcVar1; cVar3 != '\0'; cVar3 = cVar3 + -1) {
    pcVar1[uVar2 + 0x587] =
         *(char *)(param_1 + 0x14ad8 + (ulonglong)*(ushort *)(pcVar1 + uVar2 * 2 + 0x41f6));
    uVar2 = (ulonglong)(byte)((char)uVar2 + 1);
  }
  cVar3 = (**(code **)(pcVar1 + 0x18))
                    (*(undefined8 *)(param_1 + 0x10 + (param_2 & 0xffff) * 8),param_3);
  return cVar3 != '\0';
}

