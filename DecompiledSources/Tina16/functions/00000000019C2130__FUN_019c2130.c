/* Ghidra address: 019c2130 */
/* Ghidra symbol: FUN_019c2130 */


bool FUN_019c2130(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int *local_res8;
  int *local_res10;
  bool local_9;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00419500(param_1);
  FUN_00419500(local_res10);
  local_9 = false;
  *param_3 = 0;
  cVar1 = FUN_019c2070(local_res8);
  if (cVar1 != '\0') {
    cVar1 = FUN_019c2070(local_res10);
    if ((cVar1 != '\0') && (local_res8[1] == local_res10[1])) {
      iVar2 = FUN_019c20e0(*local_res8,local_res8[2],*local_res10,local_res10[2]);
      *param_3 = iVar2;
      local_9 = 0 < *param_3;
      goto code_r0x019c221d;
    }
  }
  cVar1 = FUN_019c2000(local_res8);
  if (cVar1 != '\0') {
    cVar1 = FUN_019c2000(local_res10);
    if ((cVar1 != '\0') && (*local_res8 == *local_res10)) {
      iVar2 = FUN_019c20e0(local_res8[1],local_res8[3],local_res10[1],local_res10[3]);
      *param_3 = iVar2;
      local_9 = 0 < *param_3;
    }
  }
code_r0x019c221d:
  FUN_00417840(&local_res8,&DAT_0147b748,2);
  return local_9;
}

