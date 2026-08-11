/* Ghidra address: 0161c200 */
/* Ghidra symbol: FUN_0161c200 */


void FUN_0161c200(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0161bc10(*(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x5bc),
                       *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x48));
  uVar1 = FUN_0161bcd0(param_1,uVar1,param_2,1);
  FUN_01614c70(uVar1);
  FUN_01698550();
  return;
}

