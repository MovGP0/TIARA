/* Ghidra address: 0085a710 */
/* Ghidra symbol: FUN_0085a710 */


undefined8
FUN_0085a710(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,longlong param_5)

{
  undefined8 uVar1;
  char local_19;
  
  *(undefined8 *)(param_5 + 0x88) = param_1;
  uVar1 = 0;
  if ((param_2 == 2) && (*(longlong *)(param_5 + 0x70) != 0)) {
    local_19 = '\x01';
    (**(code **)(param_5 + 0x70))(*(undefined8 *)(param_5 + 0x78),param_5,param_3,&local_19);
    if (local_19 == '\0') {
      uVar1 = 1;
    }
  }
  return uVar1;
}

