/* Ghidra address: 00468340 */
/* Ghidra symbol: FUN_00468340 */


void FUN_00468340(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  uVar1 = *param_2;
  if (uVar1 < 0xe) {
    if (uVar1 != 0xd) {
      if (uVar1 == 0) {
        FUN_0041b800(param_1);
        return;
      }
      if (uVar1 == 1) {
        if (DAT_01dc436a != '\0') {
          FUN_00460110(1,0xd);
        }
        FUN_0041b800(param_1);
        return;
      }
      if (uVar1 != 9) goto LAB_004683f0;
    }
    FUN_0041b840(param_1,*(undefined8 *)(param_2 + 4));
  }
  else {
    if (uVar1 == 0x101) {
      FUN_004682b0(param_1);
      return;
    }
    if ((uVar1 == 0x4009) || (uVar1 == 0x400d)) {
      FUN_0041b840(param_1,**(undefined8 **)(param_2 + 4));
      return;
    }
LAB_004683f0:
    uVar1 = *param_2;
    cVar2 = FUN_0046eed0(uVar1,&local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_0041b800(param_1);
      cVar2 = FUN_00411110(local_20,&DAT_00468438,uVar3);
      if (cVar2 != '\0') {
        return;
      }
    }
    FUN_00460110(uVar1,0xd);
  }
  return;
}

