/* Ghidra address: 0094f2c0 */
/* Ghidra symbol: FUN_0094f2c0 */


undefined8 FUN_0094f2c0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  (**(code **)(*param_1 + 0xf0))(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0090d520);
  if (cVar1 == '\0') {
    uVar3 = FUN_008b9140(param_1,param_2,param_3);
    uVar3 = FUN_004113f0(uVar3,&PTR_FUN_00907cc8);
  }
  else {
    FUN_008b87a0(param_1,param_2);
    FUN_008b8930(param_1,param_2);
    FUN_008b8800(param_1,param_3);
    lVar2 = (**(code **)(*param_2 + 0x138))(param_2);
    if (lVar2 == 0) {
      uVar3 = (**(code **)(*param_1 + 0x2a0))(param_1,param_3);
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x2a8))(param_1,lVar2,param_3);
      while (cVar1 = (**(code **)(*param_2 + 0x278))(param_2), cVar1 != '\0') {
        plVar4 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
        uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,0);
        (**(code **)(*param_1 + 0x280))(param_1,uVar5,lVar2);
      }
    }
  }
  return uVar3;
}

