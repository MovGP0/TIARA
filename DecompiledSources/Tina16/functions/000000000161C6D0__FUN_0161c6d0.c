/* Ghidra address: 0161c6d0 */
/* Ghidra symbol: FUN_0161c6d0 */


undefined8 FUN_0161c6d0(undefined8 param_1,longlong param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  byte local_31;
  undefined1 local_30 [8];
  
  bVar1 = FUN_0161c160(param_1,param_2,local_30,&local_31);
  if (param_3 == '\0') {
    cVar2 = FUN_0161c060(param_1,param_2);
    if ((cVar2 == '\0') && (cVar2 = FUN_0161c0b0(param_1,param_2), cVar2 == '\0')) {
      if ((bVar1 != 0) && (local_31 == 0)) {
        uVar3 = FUN_0161c550(param_1,param_2);
        return uVar3;
      }
      cVar2 = FUN_0161c1e0(param_1,param_2);
      if (cVar2 != '\0') {
        uVar3 = FUN_0161c430(param_1,param_2);
        return uVar3;
      }
      cVar2 = FUN_0161bbd0(param_1);
      if (cVar2 != '\0') {
        uVar3 = FUN_0161c250(param_1);
        return uVar3;
      }
      if ((local_31 & bVar1) != 0) {
        *(undefined1 *)(param_2 + 0x1a) = 0;
        uVar3 = FUN_01698550(0x4024000000000000);
        return uVar3;
      }
      return 0;
    }
    uVar3 = FUN_0161c200(param_1,param_2);
  }
  else {
    uVar3 = FUN_0161c270(param_1,param_2);
  }
  return uVar3;
}

