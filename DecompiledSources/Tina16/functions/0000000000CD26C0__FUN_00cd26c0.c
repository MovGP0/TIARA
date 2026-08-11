/* Ghidra address: 00cd26c0 */
/* Ghidra symbol: FUN_00cd26c0 */


longlong FUN_00cd26c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_02005900 == 0) {
    FUN_0040d200(param_2,0x44,0);
  }
  else {
    uVar1 = (**(code **)PTR_DAT_02005900)();
    (**(code **)PTR_DAT_02002c08)(*(undefined8 *)(param_1 + 8),uVar1,param_2 + 4,param_2);
  }
  return param_2;
}

