/* Ghidra address: 01d3fee0 */
/* Ghidra symbol: FUN_01d3fee0 */


undefined8 FUN_01d3fee0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  char *local_30 [2];
  
  sVar2 = FUN_01d03160(param_1);
  if (sVar2 == 4) {
    (**(code **)(*param_1 + 0x2d0))(param_1,0,local_30);
    cVar1 = *local_30[0];
    (**(code **)(*param_1 + 0x2d0))(param_1,1,local_30);
    if ((((param_2 & 1) == 0) || (cVar1 != '\x02')) &&
       (((param_2 & 2) == 0 || (*local_30[0] != '\x01')))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

