/* Ghidra address: 00850700 */
/* Ghidra symbol: FUN_00850700 */


void FUN_00850700(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined2 local_2a [5];
  
  iVar1 = *param_2;
  if ((((iVar1 == 0x100) || (iVar1 == 0x102)) || (iVar1 == 0x104)) &&
     ((char)param_1[0xa6] == '\x02')) {
    local_2a[0] = (undefined2)param_2[2];
    uVar2 = FUN_007f9990(param_2[4]);
    (**(code **)(*param_1 + 0x2e0))(param_1,local_2a,uVar2);
    *(undefined2 *)(param_2 + 2) = local_2a[0];
    if (((short)param_2[2] != 0) && ((char)param_1[0xa7] != '\0')) {
      uVar3 = FUN_0065b870(param_1[0xa5]);
      thunk_FUN_041b2403(uVar3,*param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      return;
    }
  }
  FUN_0083e4f0(param_1,param_2);
  return;
}

