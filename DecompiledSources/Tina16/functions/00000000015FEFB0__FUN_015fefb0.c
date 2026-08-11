/* Ghidra address: 015fefb0 */
/* Ghidra symbol: FUN_015fefb0 */


char FUN_015fefb0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  char local_11;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_11 = '\0';
  FUN_00414480(param_1);
  local_10 = FUN_005ea470(&DAT_005e7878,1,param_2);
  FUN_005ea670(local_10,0xffffffff80000002);
  FUN_015fecc0(&local_30,L"\\Software",L"\\Microchip\\MPLAB XC8 C Compiler",local_10);
  cVar1 = FUN_005ea880(local_10,local_30,0);
  if (cVar1 != '\0') {
    local_11 = FUN_005ebec0(local_10,L"Location");
    if (local_11 != '\0') {
      FUN_005eb6d0(local_10,&local_48,L"Location");
      FUN_00414ad0(param_1,local_48);
    }
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_48);
  FUN_00414560(&local_30,3);
  return local_11;
}

