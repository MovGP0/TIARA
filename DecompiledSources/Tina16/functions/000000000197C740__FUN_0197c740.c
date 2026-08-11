/* Ghidra address: 0197c740 */
/* Ghidra symbol: FUN_0197c740 */


undefined4 FUN_0197c740(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_85 [101];
  
  uVar1 = 0;
  if (*(int *)(param_1[0x96] + 0x10) != 0) {
    lVar2 = (**(code **)(*param_1 + 0x268))(param_1);
    if ((*(uint *)(*(longlong *)(lVar2 + 0x220) + 10) & 0x10000) != 0) {
      uVar3 = FUN_004aeac0(param_1[0x96],0);
      lVar2 = FUN_0197c280(param_1[0x95],uVar3);
      if (lVar2 != 0) {
        (**(code **)(*param_1 + 0x280))(param_1,local_85);
        uVar3 = FUN_004aeac0(param_1[0x96],0);
        uVar1 = FUN_0197e2e0(lVar2,uVar3,local_85,0);
      }
    }
  }
  return uVar1;
}

