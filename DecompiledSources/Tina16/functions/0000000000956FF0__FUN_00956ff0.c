/* Ghidra address: 00956ff0 */
/* Ghidra symbol: FUN_00956ff0 */


void FUN_00956ff0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0090d520);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_0090be88);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_0090a420);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_00909bd0);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(param_2,&PTR_FUN_0090ba08);
          if (cVar1 == '\0') {
            cVar1 = FUN_004113d0(param_2,&PTR_FUN_0090b468);
            if (cVar1 == '\0') {
              cVar1 = FUN_004113d0(param_2,&PTR_FUN_0090d088);
              if (cVar1 == '\0') {
                cVar1 = FUN_004113d0(param_2,&PTR_FUN_0090c850);
                if (cVar1 == '\0') {
                  FUN_00410ae0(*param_2,&local_18);
                  FUN_00416ba0(&local_10,L"Not supported error: ",local_18);
                  uVar2 = FUN_0044d490(&PTR_FUN_009013a8,1,local_10);
                  FUN_004134c0(uVar2);
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_008b8430(param_1,param_2);
  FUN_00414560(&local_18,2);
  return;
}

