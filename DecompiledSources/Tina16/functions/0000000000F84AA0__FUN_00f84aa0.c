/* Ghidra address: 00f84aa0 */
/* Ghidra symbol: FUN_00f84aa0 */


void FUN_00f84aa0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_041fc761();
  *(undefined8 *)(param_1 + 0xd10) = uVar1;
  thunk_FUN_04154487(param_1 + 0xd18,*(undefined8 *)(param_1 + 0xd10),FUN_00f847a0,param_1,500,500,0
                    );
  return;
}

