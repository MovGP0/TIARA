/* Ghidra address: 0197c5d0 */
/* Ghidra symbol: FUN_0197c5d0 */


void FUN_0197c5d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_85 [101];
  
  if (*(int *)(param_1[0x96] + 0x10) != 0) {
    lVar1 = (**(code **)(*param_1 + 0x268))(param_1);
    if ((*(uint *)(*(longlong *)(lVar1 + 0x220) + 10) & 0x8000) != 0) {
      uVar2 = FUN_004aeac0(param_1[0x96],0);
      lVar1 = FUN_0197c280(param_1[0x95],uVar2);
      if (lVar1 != 0) {
        (**(code **)(*param_1 + 0x280))(param_1,local_85);
        uVar2 = FUN_004aeac0(param_1[0x96],0);
        FUN_0197d770(lVar1,uVar2,local_85,0,0);
      }
    }
  }
  return;
}

