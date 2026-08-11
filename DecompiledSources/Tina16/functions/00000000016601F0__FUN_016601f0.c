/* Ghidra address: 016601f0 */
/* Ghidra symbol: FUN_016601f0 */


void FUN_016601f0(longlong param_1,char param_2,char param_3)

{
  ulonglong uVar1;
  
  FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0xf3);
  FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0xf);
  FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0x7e);
  uVar1 = CONCAT62((int6)((ulonglong)*(longlong *)(param_1 + 0x3c0) >> 0x10),param_2 * 8) &
          0xffffffff;
  FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),
               CONCAT71((int7)(uVar1 >> 8),(char)uVar1 + param_3 + -0x40));
  return;
}

