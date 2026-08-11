/* Ghidra address: 00afdd80 */
/* Ghidra symbol: FUN_00afdd80 */


undefined8
FUN_00afdd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5
            )

{
  undefined8 local_res18;
  undefined4 local_res20;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = param_2;
  FUN_00414610(param_3);
  FUN_00416dc0(&local_res18,local_res18,1,param_5 + -1);
  FUN_00afdce0(auStack_58,&local_10);
  FUN_00414b50(&local_res18,local_10);
  FUN_00416ea0(PTR_u_<___StartFragment__>_01e7f240,&local_res18,local_res20);
  FUN_00afd720(auStack_58,L"<meta");
  FUN_00afd720(auStack_58,L"<!doctype");
  FUN_00afd8c0(auStack_58,L"page-break-");
  FUN_00afda40(auStack_58);
  local_38 = PTR_u_<___EndFragment__>_01e7f248;
  FUN_00416cd0(&local_res18,3,PTR_u_<_DOCTYPE_HTML_PUBLIC_____W3C__D_01e7f258,local_res18);
  FUN_00afd160(auStack_58,&local_18,local_res18);
  FUN_00414bf0(local_20,local_18);
  FUN_004144d0(&local_18);
  FUN_00414480(&local_10);
  FUN_00414480(&local_res18);
  return local_20;
}

