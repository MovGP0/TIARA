/* Ghidra address: 01cafc90 */
/* Ghidra symbol: FUN_01cafc90 */


ulonglong FUN_01cafc90(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 in_RAX;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_2c;
  
  plVar2 = (longlong *)
           FUN_01cafae0(&DAT_01caee50,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,
                        param_2,0,0);
  *param_3 = 0;
  uVar1 = FUN_01d350f0(param_1,plVar2,&local_2c);
  uVar4 = (ulonglong)uVar1;
  if ((char)uVar1 != '\0') {
    lVar3 = FUN_01d347d0(param_1,local_2c);
    *param_3 = *(longlong *)(lVar3 + 0x18);
    (**(code **)(*plVar2 + -0x20))(plVar2,1);
  }
  if (*param_3 != 0) {
    uVar4 = CONCAT71((int7)((ulonglong)*param_3 >> 8),0 < *(int *)(*param_3 + 0x10));
  }
  return uVar4;
}

