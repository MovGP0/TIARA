/* Ghidra address: 01966440 */
/* Ghidra symbol: FUN_01966440 */


uint FUN_01966440(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  
  if (((*(char *)(param_1 + 0x2c4) == '\0') || (*(double *)(param_1 + 0xa8) == 0.0)) ||
     (*(double *)(param_1 + 0xb0) == 0.0)) {
    uVar3 = FUN_019511a0(param_1,param_2);
  }
  else {
    cVar1 = FUN_01966370(auStack_48,*param_2,param_2[1]);
    cVar2 = FUN_01966370(auStack_48,param_2[2],param_2[1]);
    uVar3 = (uint)(cVar2 != cVar1);
    cVar2 = FUN_01966370(auStack_48,*param_2,param_2[3]);
    if (cVar2 != cVar1) {
      uVar3 = 1;
    }
    cVar2 = FUN_01966370(auStack_48,param_2[2],param_2[3]);
    if (cVar2 != cVar1) {
      uVar3 = 1;
    }
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_019511a0(param_1,param_2);
    }
  }
  return uVar3;
}

