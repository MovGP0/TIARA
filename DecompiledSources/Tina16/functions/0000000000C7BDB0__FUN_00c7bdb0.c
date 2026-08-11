/* Ghidra address: 00c7bdb0 */
/* Ghidra symbol: FUN_00c7bdb0 */


undefined8 FUN_00c7bdb0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *local_res10 [3];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_48 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_30[0] = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_0041b800(param_1);
  if (local_res10[0] != (longlong *)0x0) {
    (**(code **)(*local_res10[0] + 0x20))(local_res10[0],local_30);
    iVar2 = (**(code **)(*local_30[0] + 0x18))();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_res10[0] + 0x20))(local_res10[0],&local_40);
        (**(code **)(*local_40 + 0x20))(local_40,&local_38,iVar3);
        cVar1 = (**(code **)(*local_38 + 0x48))(local_38);
        if (cVar1 == '\x04') {
          (**(code **)(*local_res10[0] + 0x20))(local_res10[0],&local_48);
          (**(code **)(*local_48 + 0x20))(local_48,param_1,iVar3);
          break;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00417840(&local_48,&DAT_00b9f960,2);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  FUN_0041b800(local_res10);
  return param_1;
}

