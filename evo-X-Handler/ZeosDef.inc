{********************************************************}
{                                                        }
{                 Zeos Database Objects                  }
{                Global definition file                  }
{                                                        }
{    Copyright (c) 1999-2001 Zeos Development Group      }
{                                                        }
{********************************************************}

{ Compiler directives }
{$IFDEF VER130}
  {$DEFINE VER130ABOVE}
{$ENDIF}
{$IFDEF VER140}
  {$DEFINE VER130ABOVE}
  {$DEFINE VERCLX}
{$ENDIF}
{$IFDEF VER150}
  {$DEFINE VER150ABOVE}
  {$DEFINE VER130ABOVE}
{$ENDIF}
{$IFDEF LINUX}
  {$DEFINE VERCLX}
{$ENDIF}
