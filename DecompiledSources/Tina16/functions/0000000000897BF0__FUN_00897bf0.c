/* Ghidra address: 00897bf0 */
/* Ghidra symbol: FUN_00897bf0 */


void FUN_00897bf0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar3;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (((char)param_3 != '\0') && (cVar1 = FUN_00879990(5,0), cVar1 != '\0')) {
    local_34 = 1;
    local_2c = param_5;
    local_30 = param_4;
    (**(code **)PTR_PTR_02003200)(param_2,0x98000004,&local_34,0xc,0,0,local_38,0,0);
    return;
  }
  uVar2 = FUN_00875200(param_3,1,0);
  (**(code **)(*param_1 + 0xd0))(param_1,param_2,0xffff,8,CONCAT44(uVar3,uVar2));
  return;
}

